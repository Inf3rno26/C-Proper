import numpy as np
import matplotlib.pyplot as plt

# -------------------------
# CONFIG
# -------------------------
START = np.array([0, 0])
END = np.array([100, 0])
NUM_WAYPOINTS = 5
POP_SIZE = 30
GENERATIONS = 80
MUTATION_RATE = 0.2

# -------------------------
# WIND MODEL (FAKE BUT GOOD)
# -------------------------
def wind_at(point):
    x, y = point
    wind_x = 5 * np.sin(y / 20)     # tailwind zones
    wind_y = 0
    return np.array([wind_x, wind_y])

# -------------------------
# PATH & FITNESS
# -------------------------
def path_distance(path):
    return sum(np.linalg.norm(path[i+1] - path[i]) for i in range(len(path)-1))

def wind_bonus(path):
    bonus = 0
    for i in range(len(path)-1):
        direction = path[i+1] - path[i]
        direction = direction / np.linalg.norm(direction)
        wind = wind_at(path[i])
        bonus += np.dot(wind, direction)
    return bonus

def fitness(path):
    return path_distance(path) - wind_bonus(path)

# -------------------------
# GENETIC ALGORITHM
# -------------------------
def random_path():
    waypoints = np.linspace(START, END, NUM_WAYPOINTS)
    noise = np.random.randn(*waypoints.shape) * 10
    waypoints[1:-1] += noise[1:-1]
    return waypoints

population = [random_path() for _ in range(POP_SIZE)]

for _ in range(GENERATIONS):
    population.sort(key=fitness)
    survivors = population[:POP_SIZE//3]

    children = []
    while len(children) < POP_SIZE:
        parent = survivors[np.random.randint(len(survivors))]
        child = parent.copy()

        if np.random.rand() < MUTATION_RATE:
            idx = np.random.randint(1, NUM_WAYPOINTS-1)
            child[idx] += np.random.randn(2) * 5

        children.append(child)

    population = children

best_path = min(population, key=fitness)

# -------------------------
# BASELINE (STRAIGHT PATH)
# -------------------------
baseline = np.linspace(START, END, NUM_WAYPOINTS)

# -------------------------
# VISUALIZATION
# -------------------------
plt.figure(figsize=(10,5))

plt.plot(baseline[:,0], baseline[:,1], 'r--', label="Standard Route")
plt.plot(best_path[:,0], best_path[:,1], 'g-', label="Optimized Route")

# Wind field
X, Y = np.meshgrid(np.linspace(0,100,20), np.linspace(-40,40,20))
U = 5 * np.sin(Y / 20)
V = np.zeros_like(U)
plt.quiver(X, Y, U, V, alpha=0.4)

plt.legend()
plt.title("Adaptive Flight Path Optimization")
plt.xlabel("Distance")
plt.ylabel("Latitude Offset")
plt.show()

print("Baseline cost:", fitness(baseline))
print("Optimized cost:", fitness(best_path))

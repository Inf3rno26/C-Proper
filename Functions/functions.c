#include <stdio.h>

float square(int num)
{
    int result = num * num;

    return result;
}

double cube(double number)
{
    double result = number * number * number;
    return result;
}

int main()
{
    int x = square(2);
    int y = square(3);
    int z = square(4);
    printf("Square Series \n");
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);


    double p = cube(3);
    double q = cube(2.3);
    printf("Cubic Series\n");
    printf("%.2lf \n", p);
    printf("%.2lf \n", q);

}
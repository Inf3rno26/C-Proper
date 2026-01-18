#include <stdio.h>

int main()
{
    char name[30] = "";
    int age = 0;
    float cgpa = 0.0f;
    char grade = '/0';
    
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    
    printf("Enter your Cgpa:");
    scanf("%f", &cgpa);

    
    printf("Your name: %s\n", name);
    printf("Your Age: %d\n", age);
    printf("Your CGPA: %.1f \n", cgpa);
    printf("Your Grade: %c", grade);

    return 0;
}
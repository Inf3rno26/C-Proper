#include <stdio.h>
#include <math.h>

int square(int number);

int main()
{
    int value = 0;
    printf("Enter the Number: ");
    scanf("%d", &value);

    square(value);
}

int square(int number){
    int value = pow(number,2);

    printf("%d",value);
}
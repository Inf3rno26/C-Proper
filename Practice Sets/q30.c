#include <stdio.h>
#include <math.h>

void sumOfNumber(int n);

int main()
{
    int value = 0;
    printf("Enter the Number: ");
    scanf("%d", &value);

    sumOfNumber(value);
}

void sumOfNumber(int n) {
    printf("Addition: %d", n+n);
};
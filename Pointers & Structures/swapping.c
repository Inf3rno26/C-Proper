#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 400;
    int b = 20;

    int *pA = &a;
    int *pB = &b;

    swap(pA, pB);
    printf("a = %d, b = %d", a, b);
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

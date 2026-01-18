#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 5;
    int *pOdd = calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter first five odd Number: ");
        scanf("%d", &pOdd[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", pOdd[i]);
    }

    //even
    int *pEven = realloc(pOdd, 6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter #%d Six Even Number: ", i+1);
        scanf("%d", &pEven[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf(" \n%d", pEven[i]);
    }

    free(pEven);
    pEven = NULL;
}
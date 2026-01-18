#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the Number Initallly: ");
    scanf("%d", &number);

    int *pNumber = malloc(number * sizeof(int));

    for (int i = 0; i < number; i++)
    {
        printf("Enter The Actual Number #%d: ", i + 1);
        scanf("%d", &pNumber[i]);
    }

    int newNumber = 0;
    printf("Enter the Increased Number: ");
    scanf("%d", &newNumber);

    int *pnewNumber = realloc(pNumber, newNumber * sizeof(int));

    if (pNumber == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        for (int i = number; i < newNumber; i++)
        {
            printf("Enter The Actual Number #%d: ", i + 1);
            scanf("%d", &pNumber[i]);
        }

        for (int i = 0; i<newNumber; i++){
            printf("%d ", pNumber[i]);
        }
    }

    free(pNumber);
    pNumber = NULL;

    return 0;
}

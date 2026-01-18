#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the Number of Prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL)
    {
        printf("MEMORY NOT ALLOCATED!!!\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter the Prices of #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // realloc usage

    int newNumber = 0;
    printf("Do You want to Enter  a new number: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("MEMORY NOT ALLOCATED!!!\n");
    }
    else
    {
        prices = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++)
        {
            printf("Enter the Prices of #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i <newNumber; i++){
            printf("$%.2f", prices[i]);
        }
    }


    free(prices);
    prices = NULL;
}

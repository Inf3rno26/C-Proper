#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the number of Players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if (scores == NULL)
    {
        printf("MEMORY NOT ALLOCATED!!! \n");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("Enter Scores of The Players #%d: ", i+1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the Number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL)
    {
        printf("MEMORY ALLOCATION FAILED! \n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter the grades #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }

    free(grades);  // to free the unused memory
    grades = NULL; // avoids dangling pointers
}
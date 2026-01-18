// #include <stdio.h>

// int main()
// {
//     for(int x = 1; x<=10;x++){
//         for(int i=1; i<=10;i++){
//             printf("%3d ",i * x);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("How many rows do you want?: ");
    scanf("%d", &rows);

    printf("How many columns do you want?: ");
    scanf("%d", &columns);

    printf("Enter the Symbol to use: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
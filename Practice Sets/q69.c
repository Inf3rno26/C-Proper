#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the No of elements: ");
    scanf("%d", &number);

    int *pNumber = calloc(number, sizeof(int));

    if (pNumber == NULL){
        printf("Memory not allocated");
        return 1;
    }

    for (int i=0 ; i < number; i++){
        printf("Enter the number: ");
        scanf("%d", &pNumber[i]);
    }

    for(int i=0;i<number;i++){
        printf("%d ", pNumber[i]);
    }

}
#include <stdio.h>

int main()
{
    FILE *pFile = fopen("output.txt", "w");

    if (pFile == NULL){
        printf("Couldn't Open The File! \n");
        return 1;
    }

    fclose(pFile);


    return 0;
}
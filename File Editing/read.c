#include <stdio.h>
#include <string.h>

int main()
{
    FILE *pFile = fopen("output.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL){
        printf("File Can't Be Opened! \n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}w
    #include <stdio.h>

    int main()
    {
        FILE *pFile = fopen("output.txt", "w");

        char text[] = "Hello! Checking The File. \n 3..\n 2...\n 1...."; 

        if (pFile == NULL){
            printf("Couldn't Open The File! \n");
            return 1;
        }

        fprintf(pFile, "%s", text);

        printf("File was written! Successfully! \n");

        fclose(pFile);


        return 0;
    }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int age;
    float marks;

} Student;

int main()
{
    int student_Number;

    printf("How many Students You want:");
    scanf("%d", &student_Number);
    
    Student *std = calloc(student_Number, sizeof(Student));
    // Student std2 = {"Mihir", 18, 4.55};
    // Student std3 = {"Jaywant", 18, 4.55};

    // int size = sizeof(std) / sizeof(std[0]);

    for (int i = 0; i < student_Number; i++)
    {
        printf("Enter the %dst Student name: ", i + 1);
        getchar();
        // scanf("%d", &std[i].name);
        fgets(std[i].name, sizeof(std[i].name), stdin);
        std[i].name[strlen(std[i].name) - 1] = '\0';

        printf("Ente the Age of %d st Student: ", i + 1);
        scanf(" %d", &std[i].age);

        printf("Ente the Marks of %d st Student: ", i + 1);
        scanf("%f", &std[i].marks);
    }

    for (int i = 0; i < student_Number; i++)
    {
        printf("Name: %s \n", std[i].name);
        printf("Age: %d \n", std[i].age);
        printf("Marks: %f \n", std[i].marks);
    }

    FILE *pFile;
    pFile = fopen("Student_Data.txt", "w");

    if (pFile == NULL)
    {
        printf("Couldn't Open The File! \n");
        return 1;
    }

    for (int i = 0; i < student_Number; i++)
    {
        fprintf(pFile, "Name: %s \n", std[i].name);
        fprintf(pFile, "Age: %d \n", std[i].age);
        fprintf(pFile, "Marks: %.2f \n", std[i].marks);
    }

    printf("Data Got Saved Successfully! \n");

    fclose(pFile);
    free(std);
    std = NULL;
}
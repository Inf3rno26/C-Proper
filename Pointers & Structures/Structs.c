// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// struct Student
// {
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// };

// void studentInfo(struct Student names);

// int main()
// {
//     struct Student std1 = {"Vishad", 18, 4.2, true};
//     struct Student std2 = {"Mihir", 18, 4.2, true};
//     struct Student std3 = {0};

//     strcpy(std3.name, "Nigger");
//     std3.age = 24;

//     // printf("%s\n", std1.name);
//     // printf("%s\n", std3.name);
//     // printf("%d\n", std1.age);
//     // printf("%.2f\n", std1.gpa);
//     // printf("%s\n", (std1.isFullTime) ? "Yes" : "No");

//     studentInfo(std1);
//     studentInfo(std2);
// }

// void studentInfo(struct Student student)
// {
//     printf("Name: %s\n", student.name);
//     printf("Age: %d\n", student.age);
//     printf("GPA: %.2f\n", student.gpa);
//     printf("Full Time: %s\n", (student.isFullTime) ? "Yes" : "No");
//     printf("\n");
// }

#include <stdio.h>

struct optiplex
{
    char name[50];
    int year;
    float price;
};

int main()
{
    struct optiplex Optiplexs[] = {{"Optiplex SFF", 2025, 1499.9}, {"Optiplex MFF", 2023, 1899.9}};

    int size = sizeof(Optiplexs) / sizeof(Optiplexs[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Name: %s \n", Optiplexs[i].name);
        printf("Year: %d \n", Optiplexs[i].year);
        printf("Price: %.1f\n", Optiplexs[i].price);
        printf("\n");
    }
}
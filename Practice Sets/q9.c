#include <stdio.h>

int main()
{
    int marks = 0;
    printf("Enter The Marks: ");
    scanf("%d", &marks);

    if (marks > 30)
    {
        printf("The Student Have passed the subject! \n");
    }
    else
    {
        printf("The Student have failed the subject! \n");
    }
    return 0;
}
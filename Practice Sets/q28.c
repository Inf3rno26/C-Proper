#include <stdio.h>

void Namaste(char name[]);
void Bonjour(char name[]);

int main()
{
    char choice = '\0';
    printf("Are you Indian or France? (I or F): ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'I':
        Namaste("Vishad");
        break;
    case 'F':
        Bonjour("Vishad");
        break;
    }
}

void Namaste(char name[])
{
    printf("Namaste, %s!", name);
}

void Bonjour(char name[]){
    printf("Bonjour, %s!", name);
}
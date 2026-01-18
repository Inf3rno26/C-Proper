#include <stdio.h>

void Hello(char name[])
{
    printf("Hello, %s", name);
}

void Bye(char name[]){
    printf("Bye, %s", name);
}

int main()
{
    Hello("Vishad");
    printf("\n");
    Bye("Vishad");
}
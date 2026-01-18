// #include <stdio.h>

// int main()
// {
//     int age = 28;
//     int *pAge = &age;

//     printf("%p\n", &age);
//     printf("%p\n", pAge);

// }

#include <stdio.h>

void birthday(int* age);

int main()
{
    int age = 25;
    int *pAge = &age;

    birthday(pAge);

    printf("You are this %d year old", age);    
}

void birthday(int* age) {
    (*age)++;
}
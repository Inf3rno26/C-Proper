#include <stdio.h>

int fib(int n);

int main()
{
    int result = fib(5);
    printf("%d", result);
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        // printf("Fib is 0."); // sayHello(n - 1);
        return 0;
    }
    if(n==1){
        return 1;
    }
   
    return fib(n-1) + fib(n-2);

    // sayHello(n);
}
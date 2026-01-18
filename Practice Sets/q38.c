#include <stdio.h>
void swap(int a, int b);
int main()
{
    int x = 10;
    int y = 20;
    // int *c;
    printf("x = %d & y =%d \n", x,y);

    swap(x,y);


}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b =%d \n", a,b);
}
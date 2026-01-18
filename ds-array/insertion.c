#include <stdio.h>
int main( ){
    int a[10] = {10,20,30,40,50,60}; // 0 1 2 3 4 5 
    int n = 6;
    int pos = 4;
    int value = 65;

    for(int i = n-1;pos <= i;i--){ // 5; 4 < 5
        a[i+1] = a[i];
    }

    a[pos] = value;
    n++;
    
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }

}
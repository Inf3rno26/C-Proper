#include <stdio.h>

int main () {
    int n,spaces;
    
    printf("enter the number of rows: ");
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        for(spaces=0;spaces<=n-i;spaces++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
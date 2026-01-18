#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00f;
    bool isStudent = false;
    bool isSenior = true;
    
    if(isStudent){
        if(isSenior){
        printf("He is a student and get a 10 % Discount\n");
        printf("He is a Senior and get a 20\% Discount\n");
        
        price *= 0.7;  
        }
        else{
            printf("He is a student and get a 10% Discount\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
        printf("He is a Senior and get a 20% Discount\n");
        price *= 0.8;  
    }
}    
    printf("The Price of the Ticket is: $%.2f",price);

    return 0;
    
}
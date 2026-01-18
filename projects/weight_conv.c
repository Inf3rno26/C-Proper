#include <stdio.h>
int main(){
    int choice = 0;
    float pounds = 0.0f;
    float kilo = 0.0f;
    
    printf("1. Kilogram to Pound \n");
    printf("2. Pounds to Kilogram \n"); 
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);
    if (choice == 1){
         printf("Enter Your weight(in KGs): \n");
         scanf(" %f", &kilo);
         pounds = kilo * 2.205;
         printf("Your Converted weight is: %.2f Pounds", pounds);

    }
    else if (choice == 2)
    {
         printf("Enter Your weight(in Pounds): ");
         scanf(" %f", &pounds);
         kilo = pounds / 2.205;
         printf("Your Converted weight is: %.2f KGs", kilo);
    }
    
    else {
        printf("Invalid Option! Choose the correct option");
    }


    return 0;
}
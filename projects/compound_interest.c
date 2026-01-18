#include <stdio.h>
#include <math.h>

int main()
{
    double actual_Amount = 0.0;
    double principal_Amount = 0.0;
    float rate = 0.0;
    int numberOfYears = 0;
    int time = 0;

    printf("Enter Principal Amount: ");
    scanf("%lf", &principal_Amount);

    printf("Enter Rate: ");
    scanf("%f", &rate);
    rate = rate / 100;
    printf("Enter number of years: ");
    scanf("%d", &numberOfYears);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    actual_Amount = principal_Amount * pow(1 + rate / numberOfYears, numberOfYears * time);

    printf("Your Actual amount is : %.4lf", actual_Amount);

        return 0;
}
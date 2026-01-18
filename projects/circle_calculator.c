#include <stdio.h>
#include <math.h>
int main()
{
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14;

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    // printf("Your radius is: %d", radius);
    
    area = PI * pow(radius, 2);
    printf("Your area is : %.1lf unit^2", area);
    

}
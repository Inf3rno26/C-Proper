#include <stdio.h>

int main()
{
    char item[50] = "";
    float prices = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item you are looking to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price of each item?: ");
    scanf("%f", &prices);
    printf("How many would you like?");
    scanf("%d", &quantity);

    total = prices * quantity;

    printf("\n YOU HVE BOUGHT");
    printf("The total value is: %c%.2f", currency, total);
}
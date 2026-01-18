#include <stdio.h>

int main () {
    int number = 0;

    while(number <=0){
        printf("Enter Some number: ");
        scanf("%d", &number);
    }
}

#include <stdio.h>

int main()
{
    int number = 0;

    do
    {
        printf("Enter Some number: ");
        scanf("%d", &number);
    } while (number <= 0);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s.", name);
}

#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool isRunning = true;
    char choice = '\0';

    while (isRunning)
    {
        printf("You are playing a game!\n");
        printf("Do you want to continue playing the game? (Y or N): ");
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y')
        {
            isRunning = true;
        }
        else
        {
            isRunning = false;
        }
    }

    printf("You Exited the Game! \n");
}

// #include <stdio.h>
// #include <windows.h>

// int main()
// {
//     int number = 0;

//     for (number = 0; number <= 10; number++){
//         printf("%d \n",number);
//         Sleep(1000);
//     }
// }

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {

        if (i == 6)
        {
            continue;
        }

        printf("%d \n", i);
    }
}



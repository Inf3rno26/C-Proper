// #include <stdio.h>

// int main()
// {
//     int numbers[] = {10, 20, 30, 40,50};

//     printf("%d\n", numbers[0]);

//     char name[] = {'A','B','C'};
//     printf("%c\n", name[0]);

//     printf("\n");

//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     for(int i=0;i<size;i++){
//         printf("%d\n", numbers[i]);
//     }

// }

// 2-D Arrays

// #include <stdio.h>
// int main()
// {
//     int matrix[][2] = {{1, 2},
//                        {5, 10},
//                        {20, 40}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%2d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     // printf("%d", matrix[2][0]);
// }

// Array of Strings
// #include <stdio.h>
// int main()
// {
//     char fruits[][10] = {"Apple", "Banana", "Cherries","Dosa"};

//     int size = sizeof(fruits)/sizeof(fruits[0]);

//     printf("%d \n",size);
//     fruits[0][0] = 'e';
//     fruits[0][4] = 'a';

//     fruits[1][0] = 't';
//     for (int i=0;i<size;i++){
//         printf("%s\n", fruits[i]);
//     }
// }

// USER INPUT
//  #include <stdio.h>

// int main()
// {
//     int scores[5] = {0};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the Score Respectively: ");
//         scanf("%d", &scores[i]);
//     }
//     for (int j=0;j<5;j++){
//         printf("%d ", scores[j]);
//     }

// }

// EXERCISES

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char names[][50] = {0};



//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter your name:");
//         fgets(names[i],sizeof(names[i]),stdin);
//         names[i][strlen(names[i])-1] = '\0';
//     }
    
//     for (int i = 0; i < 4; i++){
//         printf("%s ", names[i]);
//     }


// }
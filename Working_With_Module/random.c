#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int max = 100;
    int min = 50;

    int randomNum = (rand() % (max - min + 1)) + min;

    printf("%d", randomNum);
}


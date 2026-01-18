// #include <stdio.h>

// enum Day
// {
//     SUNDAY = 1,
//     MONDAY = 0,
//     TUESDAY = 2,
//     WEDNESDAY = 3,
//     THURSDAY = 4,
//     FRIDAY = 5,
//     SATURDAY = 6
// };

// int main()
// {
//     enum Day Today = TUESDAY;
//     printf("%d", Today);
// }

#include <stdio.h>

typedef enum {
    SUNDAY = 1,  //can also give direct values to constants, if given to one HAVE to give to all
    MONDAY = 0,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int main()
{
    Day Today = MONDAY;
    printf("%d", Today);
}
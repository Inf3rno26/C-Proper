    #include <stdio.h>

    int main (){
    int dayOfWeek = 0;
    printf("What is the Day of the week? ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek){
        case 1:
            printf("Its Monday");
            break;
        
        case 2:
            printf("Its tuesday");
            break;
        
        case 3:
            printf("Its Wednesday");
            break;
        
        case 4:
            printf("Its Thursday");
            break;
        
        case 5:
            printf("Its Friday");
            break;
        
        case 6:
                printf("Its Saturday");
                break;
        
        case 7:
            printf("Its Sunday");
            break;
        
        default:
        printf("ee");
        
    }
        
    }
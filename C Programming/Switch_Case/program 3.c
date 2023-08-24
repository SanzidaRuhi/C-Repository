/*write a c program to print the week name*/
#include<stdio.h>
int main()
{
    int week_name;
    printf("Enter week number=");
    scanf("%d", &week_name);
    switch(week_name)
    {
    case 1:
        printf("The day is Sunday");
        break;
        case 2:
            printf("The day is Monday");
            break;
        case 3:
            printf("The day is Tuesday");
            break;
        case 4:
            printf("The day is Wednesday");
            break;
        case 5:
            printf("The day is Thursday");
            break;
        case 6:
            printf("The day is Friday");
            break;
        case 7:
            printf("The day is Saturday");
            break;
        default:
            printf("A week consists of 7 days");
    }
    return 0;
}

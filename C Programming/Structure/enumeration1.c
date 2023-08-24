#include<stdio.h>
enum days_of_week
{
    sun=1, mon, tues, wed, thurs, fri, sat
};
int main()
{
    enum days_of_week day1, day2, day_sum, day_diff;
    day1=sun;
    day2=thurs;
    day_sum=day1+day2;
    day_diff=day2-day1;
    printf("day1= %d\n",day1);
    printf("day2= %d\n",day2);
    printf("day_sum= %d\n",day_sum);
    printf("day_diff= %d\n",day_diff);
    return 0;
}

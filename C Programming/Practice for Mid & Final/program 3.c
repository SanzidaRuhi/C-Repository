/*write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
int main()
{
    int phy, che, bio, math, comp, perc;
    printf("enter the marks of physics= ");
    scanf("%d", &phy);
    printf("enter the marks of chemistry= ");
    scanf("%d", &che);
    printf("enter the marks of biology= ");
    scanf("%d", &bio);
    printf("enter the marks of mathematics= ");
    scanf("%d", &math);
    printf("enter the marks of computer= ");
    scanf("%d", &comp);
    perc=(phy+che+bio+math+comp)/5;
    printf("the percentage is %d\n", perc);
    if(perc>=90)
    {
        printf("the grade is A");
    }
    else if(perc>=80)
    {
        printf("the grade is B");
    }
    else if(perc>=70)
    {
        printf("the grade is C");
    }
    else if(perc>=60)
    {
        printf("the grade is D");
    }
    else if(perc>=40)
    {
        printf("the grade is E");
    }
    else
    {
        printf("the grade is F");
    }
    return 0;
}

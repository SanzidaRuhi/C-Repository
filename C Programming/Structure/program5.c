//taking inputs and displaying values for structing students
#include<stdio.h>
struct student
{
    int id;
    float result;
};
struct student std[5];
int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("enter %d no. students' id: ",i+1);
        scanf("%d",&std[i].id);
        printf("enter %d no. students' result: ",i+1);
        scanf("%f",&std[i].result);
    }
    printf("\ndisplaying students' record");
    for(i=0; i<5; i++)
    {
        printf("\nstudents' id is: %d",std[i].id);
        printf("\nstudents' result is: %.2f",std[i].result);
    }
    return 0;
}

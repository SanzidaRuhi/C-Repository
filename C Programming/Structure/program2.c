#include<stdio.h>
struct person//global structure
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    for(int i=0; i<4; i++)
    {
        printf("enter information for person[%d]: \n",i+1);
        printf("enter name: ");
        scanf("%s",&person[i].name);
        printf("enter age: ");
        scanf("%d",&person[i].age);
        printf("enter salary: ");
        scanf("%f",&person[i].salary);
    }
    for(int i=0; i<4; i++)
    {
        printf("information for person[%d]: \n",i+1);
        printf("    name: %s\n",person[i].name);
        printf("    age: %d\n",person[i].age);
        printf("    salary: %f\n",person[i].salary);
    }
    return 0;
}

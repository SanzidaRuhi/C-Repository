#include<stdio.h>
struct person//global structure
{
    char name[20];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("name: %s\n",p.name);
    printf("age: %d\n",p.age);
    printf("salary: %f\n",p.salary);
}
int main()
{
    struct person person[3];
    for(int i=0; i<3; i++)
    {
        printf("enter information for person[%d]: \n",i+1);
        printf("enter name: ");
        scanf("%s",&person[i].name);
        printf("enter age: ");
        scanf("%d",&person[i].age);
        printf("enter salary: ");
        scanf("%f",&person[i].salary);
    }
    for(int i=0; i<3; i++)
    {
     printf("enter information for person[%d]: \n",i+1);
     display(person[i]);
    }
    return 0;
}

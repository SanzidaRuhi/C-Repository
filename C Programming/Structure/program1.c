#include<stdio.h>
struct person//global structure
{
    int age;
    float salary;
};
int main()
{
    /*struct person//local structure
    {
        int age;
        float salary;
    };*/
    struct person person1, person2, person3, person4={25,7860};
    /*person1.age=27;
    person1.salary=2657.6;*/
    printf("enter age for person1: ");
    scanf("%d",&person1.age);
    printf("enter salary for person1: ");
    scanf("%f",&person1.salary);
    printf("person1: \n");
    printf("    age=%d\n",person1.age);
    printf("    salary=%f\n",person1.salary);
    person2.age=26;
    person2.salary=1657.6;
    printf("person2: \n");
    printf("    age=%d\n",person2.age);
    printf("    salary=%f\n",person2.salary);
    person3=person4;
    printf("person3: \n");
    printf("    age=%d\n",person3.age);
    printf("    salary=%f\n",person3.salary);
    printf("person4: \n");
    printf("    age=%d\n",person4.age);
    printf("    salary=%f\n",person4.salary);
    if(person1.age==person3.age && person1.salary==person3.salary)
    {
        printf("person1=person3");
    }
    else
    {
        printf("person1!=person3");
    }
    return 0;
}

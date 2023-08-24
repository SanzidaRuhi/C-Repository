/*Name: Sayeda Sanzida Ferdous Ruhi
ID: CSE 072 08182*/

#include<stdio.h>
int main()
{
    char name;
    double salary, sale, final_salary;
    printf("");
    scanf("%s",&name);
    printf("");
    scanf("%lf",&salary);
    printf("");
    scanf("%lf",&sale);
    final_salary=salary+(sale*0.15);
    printf("TOTAL = BDT %.2lf",final_salary);
    return 0;
}

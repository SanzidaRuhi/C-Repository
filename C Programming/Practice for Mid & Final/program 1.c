//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    printf("enter the values:a,b,c= ");
    scanf("%f %f %f",&a, &b, &c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1=(-b+ sqrt(discriminant))/(2*a);
        root2=(-b- sqrt(discriminant))/(2*a);
        printf("root1=%f and root2=%f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%f",root1);
    }
    else
    {
       realpart=-b/(2*a);
       imaginarypart= sqrt(-discriminant)/(2*a);
       printf("root1=%f+%f and root2=%f-%f",realpart, imaginarypart, realpart, imaginarypart);
    }
    return 0;

}

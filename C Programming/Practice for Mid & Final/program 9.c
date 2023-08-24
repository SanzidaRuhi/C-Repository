/*Write a C program to find the eligibility of admission for a professional course
based on the following criteria:
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in
Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics
>=140*/
#include<stdio.h>
int main()
{
    int math, phy, chem, total_3, total_2;
    printf("enter the number of mathematics: ");
    scanf("%d",&math);
    printf("enter the number of physics: ");
    scanf("%d",&phy);
    printf("enter the number of chemistry: ");
    scanf("%d",&chem);
    total_3=math+phy+chem;
    printf("total in all three subjects=%d\n",total_3);
    total_2=math+phy;
    printf("total in maths and physics=%d\n",total_2);
    if(math>=65 && phy>=55 && chem>=50 && total_3>=190)
    {
        printf("eligible for admission\n");
    }
    else if(math>=65 && phy>=55 && chem>=50 && total_2>=140)
    {
        printf("eligible for admission\n");
    }
    else
    {
        printf("not eligible for admission\n");
    }
    return 0;

}


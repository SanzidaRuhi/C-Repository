#include<stdio.h>
#include<string.h>
void main()
{
    int r1,phy,che,ca,total;
    float per;
    char nm[20],div[10];
    printf("Input the Roll number of the student:");
    scanf("%d",&r1);
    printf("Input the Name of the student:");
    scanf("%s",&nm);
    printf("Input the marks of Physics, Chemistry and Computer Application:");
    scanf("%d %d %d",&phy,&che,&ca);
    total=phy+che+ca;
    per=total/3;
    if(per>=80)
        strcpy(div,"First");
    else
        strcpy(div,"Second");
}

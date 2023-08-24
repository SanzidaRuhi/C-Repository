#include<stdio.h>
int stack[10], top=-1;
void push()
{
    int value;
    if(top==10)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nenter value for push operation:");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}
void pop()
{
    int value;
    if(top==-1)
    {
        printf("\nunderflow");
    }
    else
    {
        top=top-1;
    }
}
void display()
{
    int i;
    if(top>-1)
    {
        for(i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
        printf("\nthere is nothing to display");
    }
}
int main()
{
    int num;
    printf("\nenter 1(push) or 2(pop) or 3(display) or 4(stop):");
    scanf("%d",&num);
    while(num!=4)
    {
        switch(num)
        {
        case 1:
            push();
            printf("\nenter 1(push) or 2(pop) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 2:
            pop();
            printf("\nenter 1(push) or 2(pop) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 3:
            display();
            printf("\nenter 1(push) or 2(pop) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 4:
            break;
        default:
            printf("\nwrong choice");
            printf("\nenter 1(push) or 2(pop) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        }
    }
    return 0;
}

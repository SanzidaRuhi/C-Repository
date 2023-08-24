#include<stdio.h>
#define max 5
int queue[max], rear=-1, front=-1;
int insert_value()
{
    if(rear==max-1)
    {
        printf("\noverflow");
    }
    else
    {
        int value;
        printf("\nenter value to insert: ");
        scanf("%d",&value);
        rear=rear+1;
        front=front+1;
        queue[rear]=value;
        queue[front]=value;
    }
}
int deleteValue()
{
    if(front==-1)
    {
        printf("\nunderflow");
    }
    else
    {
        for(int i=0; i<=front; i++)
        {
            queue[i]=queue[i+1];
        }
        rear=rear-1;
        front=front-1;
    }
}
int display()
{
    if(front>-1)
    {
        for(int i=0; i<=front; i++)
        {
            printf("%d ",queue[i]);
        }
    }
    else
    {
        printf("\nthere is nothing to display");
    }
}
int main()
{
    int n;
    printf("enter value 1(insertValue) or 2(deleteValue) or 3(diplay) or 4(stop):");
    scanf("%d",&n);
    while(n!=4)
    {
    switch(n)
    {
    case 1:
        insert_value();
        printf("\nenter value 1(insertValue) or 2(deleteValue) or 3(diplay) or 4(stop):");
        scanf("%d",&n);
        break;
    case 2:
        deleteValue();
        printf("\nenter value 1(insertValue) or 2(deleteValue) or 3(diplay) or 4(stop):");
        scanf("%d",&n);
        break;
    case 3:
        display();
        printf("\nenter value 1(insertValue) or 2(deleteValue) or 3(diplay) or 4(stop):");
        scanf("%d",&n);
        break;
    case 4:
        break;
    default:
        printf("\nwrong choice");
        printf("\nenter value 1(insertValue) or 2(deleteValue) or 3(diplay) or 4(stop):");
        scanf("%d",&n);
    }
    }
    return 0;
}

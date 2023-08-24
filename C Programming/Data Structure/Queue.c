#include<stdio.h>
#define max 5
int queue[max], rear=-1, front=-1;
void insertValue()
{
    int value;
    if(rear==max-1)
    {
        printf("\noverflow");
    }
    else
    {
        printf("\nenter value to insert:");
        scanf("%d",&value);
        rear=rear+1;
        front=front+1;
        queue[rear]=value;
        queue[front]=value;
    }
}
void deleteValue()
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
        front=front-1;
        rear=rear-1;
    }
}
void display()
{
    int i;
    if(front>-1)
    {
        for(i=0; i<=front; i++)
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
    int num;
    printf("\nenter 1(insertValue) or 2(deleteValue) or 3(display) or 4(stop):");
    scanf("%d",&num);
    while(num!=4)
    {
        switch(num)
        {
        case 1:
            insertValue();
            printf("\nenter 1(insertValue) or 2(deleteValue) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 2:
            deleteValue();
            printf("\nenter 1(insertValue) or 2(deleteValue) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 3:
            display();
            printf("\nenter 1(insertValue) or 2(deleteValue) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        case 4:
            break;
        default:
            printf("\nwrong choice");
            printf("\nenter 1(insertValue) or 2(deleteValue) or 3(display) or 4(stop):");
            scanf("%d",&num);
            break;
        }
    }
    return 0;
}

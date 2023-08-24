#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createLinkedList(int array[], int size)
{
    struct node *head=NULL, *temp=NULL, *current=NULL;
    for(int i=0; i<size; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=array[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
        //printf("%d\n",array[i]);
    }
    return head;
}
int main()
{
    int a[]={3,6,5};
    struct node *head;
    head=createLinkedList(a,3);
    while(head!=NULL)
    {
        printf("%d ->",head->data);
        head=head->next;
    }
    printf("null\n");
    return 0;
}

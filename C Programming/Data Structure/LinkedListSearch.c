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
int SearchInLinkedList(struct node *head, int value)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==value)
        {
            return index;
        }
        else
        {
            index++;
            head=head->next;
        }
    }
    return -1;
}
int main()
{
    int a[]={16,48,2,40,28,47};
    struct node *head=NULL;
    head=createLinkedList(a,6);
    struct node *current=head;
    printf("index: %d\n",SearchInLinkedList(head, 40));
    return 0;
}

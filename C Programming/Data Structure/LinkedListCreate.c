#include<stdio.h>
#include<stdlib.h>
//structing linked list nodes
struct node
{
    int data;
    struct node *next;
};
int main()
{
    //creating nodes
    struct node *head= NULL;
    struct node *a= NULL;
    struct node *b= NULL;
    //allocating memory for nodes dynamically
    head=(struct node *)malloc(sizeof(struct node));
    a=(struct node *)malloc(sizeof(struct node));
    b=(struct node *)malloc(sizeof(struct node));
    //inserting values to nodes
    head->data=10;
    a->data=20;
    b->data=30;
    head->next=a;
    a->next=b;
    b->next=NULL;
    //traversing a linked list
    printf("traversing a linked list:\n");
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    return 0;
}

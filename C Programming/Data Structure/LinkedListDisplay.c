#include<stdio.h>
#include<stdlib.h>
//structing linked list nodes
struct node
{
    int roll;
    char name[10];
    struct node *next;
};
int main()
{
    //creating nodes
    struct node *head= NULL;
    struct node *a= NULL;
    int n;
    //struct node *b= NULL;
    //allocating memory for nodes dynamically
    head=(struct node *)malloc(sizeof(struct node));
    a=(struct node *)malloc(sizeof(struct node));
    //b=(struct node *)malloc(sizeof(struct node));
    //inserting values to nodes
    /*head->data=10;
    a->data=20;
    b->data=30;
    head->next=a;
    a->next=b;
    b->next=NULL;*/
    printf("enter value for n: ");
    scanf("%d",&n);
    for(head=1; head<=n; head++)
    {
        printf("\nenter roll: ");
        scanf("%d",&head->roll);
        printf("\nenter name: ");
        scanf("%s",&head->name);
        head->next=a;
    }
    //traversing a linked list
    printf("traversing a linked list:\n");
    while(head!=NULL)
    {
        printf("%d,%c->",head->roll,head->name);
        head=head->next;
    }
    return 0;
}

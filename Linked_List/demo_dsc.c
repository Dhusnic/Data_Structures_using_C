#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int *next;
};

struct node *head,*newnode,*temp;

void create()
{
    int data;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=0;
    printf("Enter the data  :   ");
    scanf("%d\n",&newnode->data);
    if(head == NULL)
    {
        newnode->next=NULL;
        head=newnode;
        //head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;


    }



}
void display()
{
    temp=head;
    while(temp!=0)
    {
        if(head==NULL)
        {
            printf("the list is empty");

        }
        else
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void main()
{
    int choice=1;
    while(choice)
    {
        printf("enter 1 to continue to create or 0 to finish :  ");
        scanf("%d",&choice);
        create();

    }
    printf("1");
    display();
}
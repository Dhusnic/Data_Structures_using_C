#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *temp,*head=NULL,*newnode;
void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data you need to enter : ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL; 
    if ( head==NULL)
    {
        head=newnode;
        temp=newnode;
        //temp->prev=NULL;
        //temp->next=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    
    // newnode->prev=NULL;
    // newnode->data=data;
    // newnode->next=NULL;

}

void display()
{
    temp = head;
    while (temp!=NULL)
    {
        printf("%d , ",temp->data);
        temp = temp->next; //this statement is using to transversing the linked list
    }
    printf("\n");
}
int main()
{
    int choice=1;
    while(choice)
    {
        create();
        printf("enter 1 to continue to create or 0 to finish :  ");
        scanf("%d",&choice);
        

    }
    display();
}
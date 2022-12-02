#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *temp,*head=NULL,*newnode;   
//temp is the address used to transverse variable ; 
//head is used to have a starting adress of linked list ; 
//newnode always contain address of final node of linked list

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    int data;
    printf(" Enter the data you want to store   :    ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        temp=newnode;
        head = newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

} 


void display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("the list is empty");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%d , ",temp->data);
            temp = temp->next; //this statement is using to transversing the linked list
        }
    }
    
}

void at_begining()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    int data;
    printf(" \nEnter the data you want to insert at the beging  :    ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
         newnode->next=head;
         head = newnode;
    }
    
}

void at_end()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    int data;
    printf("\n Enter the data you want to insert at the END :    ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   

}

void at_position()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    int data,pos,count=0;
    printf("\n Enter the data you want to insert at the desired position :    ");
    scanf("%d",&data);
    printf("\n Enter the position you want to insert a data :    ");
    scanf("%d",&pos);
    newnode->data=data;
    newnode->next=NULL;
    temp = head;
    
    while (count<pos-2&&temp->next!=NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
    


}
int main()
{
    int choice=1;
    while (choice)
    {
        create();
        printf("enter 1 to continue and 0 to exit : ");
        scanf("%d",&choice);
        //printf("1");
    }
    display();
    at_begining();
    display();
    at_end();
    display();
    at_position();
    display();
    
}
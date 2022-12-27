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
void at_begining()
{
    int data;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter The data you want to insert at the begining   :   ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        newnode->prev=NULL;
    }
    
}

void at_position()
{
    struct node *temp_prev;
    int data,pos,count=0;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert   :   ");
    scanf("%d",&data);
    printf("enter the position you want to enter    :   ");
    scanf("%d",&pos);
    newnode->data=data;
    temp=head;
    newnode->next=NULL;
    if (head == NULL)
    {
        head=newnode;
    }
    else
    {
         while (count<pos-2&&temp!=NULL)
        {
            temp_prev=temp;
            temp = temp->next;
            count++;
        }
        if (temp!=NULL)
        {
            newnode->prev=temp_prev;
            newnode->next=temp->next;
            temp->next=newnode;
        }
        

        
    }
    
}

void at_end()
{
    int data;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter The data you want to insert at the END    :   ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->prev=temp;
        temp->next=newnode;
        newnode->next=NULL;
    }

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
    at_begining();
    display();
    at_end();
    display();
    at_position();
    display();
}
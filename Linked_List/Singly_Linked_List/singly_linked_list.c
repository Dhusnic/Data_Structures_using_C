#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;
};
struct node *newnode , *head ,*temp , *prev_temp; 
void create()
{
    int data;
    printf("enter the data you need to insert = ");
    scanf("%d",&data);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
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
    if (head != NULL)
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    
}

void ins_at_beg()
{
    int data;
    printf("\nenter the data you need to insert at the begining = ");
    scanf("%d",&data);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if (head != NULL)
    {
        temp = head; 
        head = newnode;
        head->next = temp;
    }
    

}

void ins_at_pos()
{
    int data,pos;
    printf("\nenter the data you need to insert at the position = ");
    scanf("%d",&data);
    printf("enter the position you need to insert = ");
    scanf("%d",&pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    temp=head;
    while(--pos)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void ins_at_end()
{
    int data;
    printf("\nenter the data you need to insert at the end = ");
    scanf("%d",&data);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    temp = head;
    if (head != NULL)
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;  
    }
}

void del_at_beg()
{
    temp=head;
    temp=temp->next;
    head=temp;
}
void del_at_pos()
{
    int pos;
    printf("enter the pos you need to delete = ");
    scanf("%d",&pos);
    temp=head;
    while (--pos)
    {
        prev_temp=temp;
        temp=temp->next;
    }
    prev_temp->next=temp->next;
    
}
void del_at_end()
{
    temp=head;
    while(temp->next!= NULL)
    {
        prev_temp=temp;
        temp=temp->next;
    }
    prev_temp->next = NULL;
}
int main()
{
    int choice=1,a,b=1;
    while(choice == 1)
    {
        create();
        printf("press 1 to continue or 0 to end = ");
        scanf("%d",&choice);
    }
    display();
    while(b!=0)
    {
        printf("enter\n1.FOR insertion operarion\n2.FOR deletion operation\n3.FOR exiting operation");
        scanf("%d",&b);
        
        if(b==1)
        {
            printf("\nWhich operation do you want to perform ?\n1.insert at the beginning\n2.insert at the end\n3.insert at specific position\n4.To Display the Linked list\n5.To Exit");
            scanf("%d", &a);

            switch (a)
            {
            case 1:
                ins_at_beg();
                display();
                break;
            case 2:
                ins_at_end();
                display();
                break;
            case 3:
                ins_at_pos();
                display();
                break;
            case 4:
                display();
                break;
            case 5:
                break;
            }
        }
        if(b==2)
        {
            printf("\nWhich operation do you want to perform ?\n1.delete at the beginning\n2.delete at the end\n3.delete at specific position\n4.To Display the Linked list\n5.To Exit");
            scanf("%d", &a);

            switch (a)
            {
            case 1:
                del_at_beg();
                display();
                break;
            case 2:
                del_at_end();
                display();
                break;
            case 3:
                del_at_pos();
                display();
                break;
            case 4:
                display();
                break;
            case 5:
                break;
            }
        }
        if(b==3)
        {
            break;
        }
        
    }
    
    
    return 0;


}
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
    temp=head;
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

void del_at_begining()
{
    printf("\nbeging of the linked list has been deleted\n");
    temp=head;
    head=temp->next;
    free(temp);
}
void del_at_end()
{
    temp=head;
    struct  node *temp_prev;
    if (head == NULL)
    {
        printf("the list is empty");
    }
    
    else
    {
        printf("\nEND of the linked list has been deleted\n");
        while(temp->next!=NULL)
        {
            temp_prev=temp;
            temp=temp->next;
        }
        temp_prev->next=NULL;
        free(temp);
    }
}
void del_at_position()
{

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
    del_at_begining();
    display();
    del_at_end();
    display();
    
}
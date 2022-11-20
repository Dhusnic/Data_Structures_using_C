 
#include <stdio.h>
#include <stdlib.h>
void at_beginning();
void at_end();
void at_position(int);
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *newnode;
struct node *temp;

void create(int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;

    if (head == NULL)
    {
        head = new_node;
        temp = new_node;
    }

    else
    {
        temp->next = new_node;
        temp = new_node;

    }
    
}

void at_beginning()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the beginning : \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->next = head;
    head = newnode;
}

void at_end()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the end :\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void at_position(int count)
{
    int key, i = 1;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insertion : \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    printf("Enter where you want to insert the data: \n");
    scanf("%d", &key);
    while(temp!=NULL&&temp->data!=key)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else
    {
        printf("\n Notfound");
    }
   
}

void display()
{
    temp = head;
    printf("Your Linked list is : \n");
    while (temp != 0)
    {
        printf("%d ,", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int c=1,d,a,count;
    do
    {
        printf("press 1 to continue and 0 to finish : ");
        scanf("%d",&c);
        if(c==1)
        {
            printf("enter the data you want : ");
            scanf("%d",&d);
            create(d);
        }
         
    }while (c==1);
    
    display();

    printf("\nWhich operation do you want to perform ?\n1.insert at the beginning\n2.insert at the end\n3.insert at specific position\n4.To Display the Linked list\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        at_beginning();
        display();
        break;
    case 2:
        at_end();
        display();
        break;
    case 3:
        at_position(count);
        display();
        break;
    case 4:
        display();
        break;
    }
    return 0;
}
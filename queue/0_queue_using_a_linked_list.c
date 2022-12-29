#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};
struct queue *newele,*head,*temp,*prev_temp;
int size=0;
void enqueue()
{
    int data;
    newele = (struct queue *)malloc(sizeof(struct queue));
    printf("ENTER THE DATA TO ENQUEUE INTO QUEUE = ");
    scanf("%d",&data);
    newele->data=data;
    newele->next=NULL;
    if (head==NULL)
    {
        head=newele;
        temp=newele;
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is ENQUEUE into the QUEUE",data);
        printf("\n-----------------------------------------------------------------\n");
    }
    if (head != NULL)
    {
        temp->next=newele;
        temp=newele;
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is ENQUEUE into the QUEUE",data);
        printf("\n-----------------------------------------------------------------\n");
    }
    size++;

}

void dequeue()
{
    temp = head;
    if (size<=0)
    {
        printf("\n-----------------------------------------------------------------\n");
        printf("\nthe QUEUE is empty or UNDERFLOW\n");
         printf("\n-----------------------------------------------------------------\n");
    }
    else
    {
        temp=head;
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is DEQUED",temp->data);
        printf("\n-----------------------------------------------------------------\n");
        temp=temp->next;
        free(head);
        head=temp;
        size--;
    }
    
}

void display()
{
    int ele[size],i=0;
    temp=head;
    while(temp!=NULL)
    {
     ele[i]=temp->data;
     temp=temp->next;
     i++;

    }
    printf("\nTHE ELEMENTS PRESENTS IN QUEUE ARE : ");
    for(i=size-1;i>=0;i--)
    {
        printf("\t%d\t|",ele[i]);
    }
    
    printf("\n");

}

int main()
{
    int choice=1,b;
    while(choice==1)
    {
        printf("\nENTER\n1.TO ENQUEUE\n2.TO DEQUEUE\n3.TO DISPLAY QUEUE\n4.SIZE OF THE QUEUE\n5.TO EXIT\nENTER THE OPTION : ");
        scanf("%d",&b);
        switch (b)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n-----------------------------------------------------------------\n");
            printf("\nthe number of elements in queue = %d\n",size);
            printf("\n-----------------------------------------------------------------\n");
            break;
        case 5:
            printf("\n-----------------------------------------------------------------\n");
            printf("\nTHE PROGRAM HAS BEEN END (THANK YOU)\n");
            printf("\n-----------------------------------------------------------------\n");
            choice=0;
            break;
        }
    }
}
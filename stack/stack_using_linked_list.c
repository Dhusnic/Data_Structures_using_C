#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
struct stack *newele,*head,*temp,*prev_temp;
int size=0;
void push()
{
    int data;
    newele = (struct stack *)malloc(sizeof(struct stack));
    printf("ENTER THE DATA TO PUSH INTO STACK = ");
    scanf("%d",&data);
    newele->data=data;
    newele->next=NULL;
    if (head==NULL)
    {
        head=newele;
        temp=newele;
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is pushed into the stack",data);
        printf("\n-----------------------------------------------------------------\n");
    }
    if (head != NULL)
    {
        temp->next=newele;
        temp=newele;
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is pushed into the stack",data);
        printf("\n-----------------------------------------------------------------\n");
    }
    size++;

}

void pop()
{
    temp = head;
    if (size<=0)
    {
        printf("\n-----------------------------------------------------------------\n");
        printf("\nthe stack is empty or UNDERFLOW\n");
         printf("\n-----------------------------------------------------------------\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            prev_temp=temp;
            temp=temp->next;
        }
        printf("\n-----------------------------------------------------------------\n");
        printf("%d is poped",temp->data);
        printf("\n-----------------------------------------------------------------\n");
        prev_temp->next=NULL;
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
    printf("\nTHE ELEMENTS PRESENTS IN STACK ARE : ");
    for(i=size-1;i>=0;i--)
    {
        printf("\t%d\t",ele[i]);
    }
    
    printf("\n");

}

int main()
{
    int choice=1,b;
    while(choice==1)
    {
        printf("\nENTER\n1.TO PUSH\n2.POP\n3.display\n4.SIZE OF THE STACK\n5.TO EXIT\nENTER THE OPTION : ");
        scanf("%d",&b);
        switch (b)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n-----------------------------------------------------------------\n");
            printf("\nthe size of the stack = %d\n",size);
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
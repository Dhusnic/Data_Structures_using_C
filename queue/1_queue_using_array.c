#include<stdio.h>
#include<stdlib.h>

int queue[500],i=0,size=0,size2,last=0,j=0;

void ENQUEUE()
{
    int data=0;
    printf("\nENTER THE DATA YOU NEED TO ENTER : ");
    scanf("%d",&data);
    queue[size]=data;
    i++;
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\n%d IS ENQUEUEED IN SIDE THE queue\n",data);
    printf("\n----------------------------------------------------------------------------------\n");
    size++;
    size2++;
}

void DEQUEUE()
{
    printf("\n-----------------------------------------------------------------\n");
    printf("%d IS DEQUEUEED OUT FROM A queue",queue[j]);
    printf("\n-----------------------------------------------------------------\n");
    j++;
    size2--;
}

void display()
{
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\nTHE ELEMENTS PRENSENT IN queue ARE : ");
    for (i = size-1; i>=j;i--)
    {
        printf("\t%d\t|",queue[i]);
    }
    printf("\n----------------------------------------------------------------------------------\n");
    
}

int main()
{
    int choice=1,b;
    while(choice==1)
    {
        printf("\nENTER\n1.TO ENQUEUE\n2.DEQUEUE\n3.display\n4.SIZE OF THE queue\n5.TO EXIT\nENTER THE OPTION : ");
        scanf("%d",&b);
        switch (b)
        {
        case 1:
            ENQUEUE();
            break;
        case 2:
            DEQUEUE();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n-----------------------------------------------------------------\n");
            printf("\nthe size of the queue = %d\n",size2);
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
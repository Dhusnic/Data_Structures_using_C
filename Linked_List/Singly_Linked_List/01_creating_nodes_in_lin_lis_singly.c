 #include<stdio.h>
 #include<stdlib.h>
 void create(int data);
 void display();
 struct node
 {
    int data;
    struct node *next;
 };

 struct node *head , *temp = NULL;


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

 void display()
 {
    struct node *current = head;

    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("node of singly linked list:\n");
        while(current!=NULL)
        {
            printf(" %d ,",current->data);
            current=current->next;
        }
    }
    printf("\n");
 }


int main()
{
   int c=1,d;
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
}
 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
    int data;
    struct node *next;

 };
 struct node *head,*newnode,*temp,*current;
 void create()
 {
   int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data you want to insert = ");
    scanf("%d",data);
    newnode->next=NULL;
    newnode->data=data;
    if(head == NULL)
    {
      newnode->next=head;
    }
    else
    {
      temp->next=newnode;
    }
 }

 void display()
 {
     current = head;
     if(head == NULL)
     {
       printf("the list is empty");
     }
     else
     {
      printf("\nThe singly linked list is : ");
      while (head!=NULL)
      {
         printf(" %d ,",current->data);
         current=current->next;
      }
      
     }
 }

 int main()
 {
   int choice=1,op=0;
      while(choice)
      {
         printf("\nENTER THE OPERATION YOU NEED TO BE DONE\n 1:CREATE \n 2:DISPLAY \n 3:INSERT \n 4:DELETE \n enter number of option = ");
         scanf("%d",&op);
         switch (op)
         {
         case 1:
            create();
            display();
            break;
         case 2:
            display();
            break;
         
         default:
            printf("enter the correct option : ");
            scanf("%d",&op);
            break;
         }
         printf("enter do you want to continue or not 0/1 : ");
         scanf("%d",&choice);
      }
 }
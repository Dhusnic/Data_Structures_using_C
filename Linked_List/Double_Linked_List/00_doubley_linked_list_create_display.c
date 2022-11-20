 #include<stdio.h>
 #include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *temp = NULL;

void create(int data)
{    
    struct node *new_node = (struct node*)malloc(sizeof(struct node));  
    new_node->data = data;  
      
     
    if(head == NULL) 
    {  
           
        head = tail = new_node;  
           
        head->previous = NULL;  
         
        tail->next = NULL;  
    }  
    else 
    {  
         
        tail->next = new_node;  
           
        newNode->previous = temp;  
           
        temp = new_node;  
          
        tail->next = NULL;  
    }  
}

void display() 
{  
    struct node *current = head;

    if(head == NULL) 
    {  
        printf("List is empty\n");  
        return;  
    }  

    printf("Nodes of doubly linked list: \n"); 

    while(current != NULL) 
    {  
           
        printf("%d ", current->data);  
        current = current->next;  
    }  
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
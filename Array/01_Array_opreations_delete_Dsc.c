 #include<stdio.h>
#define maxsize 10
int list[maxsize],n;


void create()
{
    int i;
    printf("Enter number of Elements = ");
    scanf("%d",&n);
    printf("enter the elements = ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",list[i]);
    }
    printf("\n Array created\n");
}

void delete()
{
    int i,data,pos;
    printf("insert data = ");
    scanf("%d",&data);
    printf("insert the position = ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Array overflow");
    }
    else{
        printf("Inserted Array \n");
        for ( i = n-1; i >= pos-1; i--)
        {
            list[i+1]=list[i];
            list[pos]=data;
            n=n+1;
        }
        for ( i = 0; i < n-1; i++)
        {
            printf("%d\n",list[i]);
        }
        
    }
}
void main()
{
    create();
    delete();
}
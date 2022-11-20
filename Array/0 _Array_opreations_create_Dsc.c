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
    printf("\n Array created");
}

void main()
{
    create();
}
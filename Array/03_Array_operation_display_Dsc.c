#include<stdio.h>
#define maxsize 10
int list[maxsize], n;
void
create ()
{
  int i;
  printf ("\nEnter the number of elements to be added:\t");
  scanf ("%d", &n);
  printf ("\n Enter the elements :\t");
  for (i = 0; i < n; i++)
    scanf ("%d", &list[i]);
  for (i = 0; i < n; i++)
    printf ("%d\t", list[i]);
}


void display ()
{
  int i;
  printf ("\nDisplaying the elements in the array");
  for (i = 0; i < n; i++)
    printf ("\n%d\t", list[i]);
}

int main()
{
    create();
    display();
}
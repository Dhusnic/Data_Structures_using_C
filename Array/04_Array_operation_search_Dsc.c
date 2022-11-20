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


void search ()
{
  int i, e, flag;
  printf ("\n Enter the Element to be searched : ");
  scanf ("%d", &e);
  for (i = 0; i < n; i++)
    {
      if (list[i] == e)
	{
	  flag = 1;
	  break;
	}
    }
  if (flag == 1)
    printf ("Value is present in the %d Position", i);
  else
    printf ("Value %d is not in the list", e);
}


int main()
{
   create();
   search();
}
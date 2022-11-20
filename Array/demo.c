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

void
insert ()
{
  int i, data, pos;
  printf ("\nEnter the data to be inserted:\t");
  scanf ("%d", &data);
  printf ("\nEnter the position of the data to be inserted:\t");
  scanf ("%d", &pos);
  if (pos > n)
    printf ("\nArray Overflow");
  else
    {
      for (i = n - 1; i >= pos - 1; i--)
	list[i + 1] = list[i];
      list[pos] = data;
      n = n + 1;
    }
  printf ("\nElements in the array are");
  for (i = 0; i < n; i++)
    printf ("\n%d\t", list[i]);

}

void
delete ()
{
  int i, pos;
  printf ("\nEnter the position of the data to be deleted:\t");
  scanf ("%d", &pos);
  if (pos < n)
    {
      printf ("\nThe data deleted is %d", list[pos]);
      for (i = pos; i < n - 1; i++)
	list[i] = list[i + 1];
      n = n - 1;

    }
  else
    {
      printf ("\nInvalid position");
    }
  printf ("\nList after deletion:");
  for (i = 0; i < n - 1; i++)
    printf ("\n%d\t", list[i]);
}

void
display ()
{
  int i;
  printf ("\nDisplaying the elements in the array");
  for (i = 0; i < n; i++)
    printf ("\n%d\t", list[i]);
}

void
search ()
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

void
main ()
{
  int c
  create ();
  insert ();
  delete ();
  display ();
  search ();
}

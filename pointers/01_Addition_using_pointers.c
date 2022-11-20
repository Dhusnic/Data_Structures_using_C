 #include <stdio.h>
 void swap(int *x, int *y);

 int main()
 {
    int a,b,*c,*d,s;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&a);
    c=&a;
    d=&b;
    s= *c + *d;
    printf("sum = %d",s);
    swap(c,d);
    return 0;
 }
 

void swap(int *x, int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
   printf("the value of a = %d\n",*x);
   printf("the value of b = %d\n",*y);

}
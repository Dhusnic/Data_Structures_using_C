 #include <stdio.h>
 void swap(int *x, int *y);
 void factorial(int *z);

 int main()
 {
    int a,b,*c,*d,s;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    c=&a;
    d=&b;
    s= *c + *d;
    printf("sum = %d",s);
    swap(c,d);
    factorial(c);
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
void factorial(int *z)
{
    int n=2,fact = 1;
    while(n<*z)
    {
        fact = fact*(n-1)*(n);
        n++;
    }
    printf("the factorial value = %d",fact);
}
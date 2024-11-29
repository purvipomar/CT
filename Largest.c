#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers a: ,b: ,c: ");
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d",&c);
if(a>b && a>c)
{
printf("a is the greatest");
}
else if(b>c)
{
printf("b is greatest");
}
else
{
printf("c is the greatest");
}
}




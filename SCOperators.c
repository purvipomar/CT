#include<stdio.h>
int main()
{
int a,b,s,choice;
printf("Enter the two values");
scanf("%d%d",&a,&b);
printf("1.Add,2.Subtract,3.Multiplication");
printf("Enter your operator what your need to perform");
scanf("%d",&choice);
 switch (choice)
 {
 case 1:
 s=a+b;
 printf ("%d",s);
           break;
 case 2:
 s=a-b;
 printf ("%d",s);
         break;
  case 3:
  s=a*b;
  printf ("%d",s);
         break;
         default :
         printf ("worng option");
 }
 }       

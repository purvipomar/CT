#include<stdio.h>
int main()
{
int t,h,m;
printf("Enter time in seconds:");
scanf("%d",&t);
h=t/3600;
printf("Time in hours is:%d\n",h);
m=t/60;
printf("Time in minutes is:%d\n",m);
}

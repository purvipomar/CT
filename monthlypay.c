#include<stdio.h>
int main()
{
int hoursperday,RPH,workdays,monthlypay;
printf("Enter Hours Worked,Rate per hour,workeddays in a month:\n");
scanf("%d",&hoursperday);
scanf("%d",&RPH);
scanf("%d",&workdays);
monthlypay=hoursperday*RPH*workdays;
printf("Monthlypay=%d\n",monthlypay);
}


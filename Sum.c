#include <stdio.h>
int main() 
{
int i = 1, n, sum = 0;
printf("Enter the value of N: ");
scanf("%d", &n);
while (i <= n) 
{
sum += i;
i++;
}
printf("Sum of series is: %d\n", sum);
return 0;
}

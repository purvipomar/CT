#include <stdio.h>
int main() {
int i;
int number, sum = 0;
for (i = 1; i <= 5; i++)
{
printf("Enter a n%d: ", i);
scanf("%d", &number);
// if the user enters a negative number, break the loop
if (number < 0) {
break;
}
sum += number; // sum = sum + number;
}
printf("Sum = %d", sum);
}


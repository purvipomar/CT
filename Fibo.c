#include<stdio.h>
int main() 
{
while (count <= n) 
{
if (count == 1) 
{
printf("%d ", a); // Print the first Fibonacci number
}
 else if (count == 2) 
{
printf("%d ", b); // Print the second Fibonacci number
} else 
{
next = a + b; // Calculate the next Fibonacci number
printf("%d ", next);
a = b; // Move the second number to the first
b = next; // Update second to the new next
}
count++; // Increment count
}
printf("\n");
return 0;
}
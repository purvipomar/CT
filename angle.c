#include <stdio.h>
int main() {
int angle1, angle2, angle3, angle4;
// Step-1: Input the four angles
printf("Enter the four angles of the shape: ");
scanf("%d %d %d %d", &angle1, &angle2, &angle3, &angle4);
// Step-2: Check if all angles are 90 degrees
if (angle1 == 90 && angle2 == 90 && angle3 == 90 && angle4 == 90) 
{
printf("The shape is a square or a rectangle.\n");
} else 
{
printf("The shape is not a square or a rectangle.\n");
}
return 0;
}

#include <stdio.h>

// Function to swap two numbers using Call by Value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call swapByValue function
    swapByValue(x, y);

#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the series
double sumSeries(int n) {
    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        sum += (double)i / factorial(i);  // i/i!
    }
    
    return sum;
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Calculate the sum of the series
    double result = sumSeries(n);
    
    // Output the result
    printf("The sum of the series up to %d terms is: %.6f\n", n, result);
    
    return 0;
}



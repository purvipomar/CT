#include <stdio.h>
#include <math.h>

// Function to find roots
void findRoots(float a, float b, float c) {
    // Calculate the discriminant
    float discriminant = b * b - 4 * a * c;
    float root1, root2;


    switch (discriminant > 0) {
        case 1:  
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
        case 0: 
            root1 = root2 = -b / (2 * a);
            printf("The roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
            break;
        default:  
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("The roots are complex.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
            break;
    }
}

int main() {
    float a, b, c;

    // Input coefficients
    printf("Enter the coefficients a, b, and c for the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    // Check if a is zero (not a quadratic equation)
    if (a == 0) {
        printf("The value of 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }

    // Call the function to find the roots
    findRoots(a, b, c);

    return 0;
}

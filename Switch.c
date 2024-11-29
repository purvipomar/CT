#include<stdio.h>
int main
int main a,b,c,root1,root2,imaginary,real;
printf("Enter the values of a,b,c")
scanf(%d%d%d,&a &b &c);
#include <stdio.h>
#include <math.h>
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

   
    discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots using switch-case
    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: // Discriminant is positive (two real roots)
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;
        case 0: // Discriminant is zero (one real root)
            root1 = -b / (2 * a);
            printf("Roots are real and same.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
            break;
        case -1: // Discriminant is negative (two complex roots)
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
            break;
    }

    return 0;
}



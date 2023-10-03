#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant;
    double realValue_1, realValue2;

    printf("Enter the coefficients: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - 4 * a * c;


    if(discriminant > 0)
    {
        realValue_1 = (-b + sqrt(discriminant)) / (2 * a);
        realValue2  = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nHere are two distinc real value of this equation: x1= %lf x2= %lf", realValue_1, realValue2);
    }
    else if (discriminant == 0)
    {
        realValue_1 = (-b + sqrt(discriminant)) / (2 * a);
        printf("\nHere is the distinc real value of this equation: x1= %lf", realValue_1);
    }
    else
    {
        printf("\nThere is no real value for x in this equation");
    }
    



    return 0;
}
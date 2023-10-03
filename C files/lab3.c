#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b, c;
	double realvalue1;
	double realvalue2;
	double discriminant;

	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = (b * b) - 4 * a * c;

    if(discriminant > 0)
    {
        realvalue1 = (-b + sqrt(discriminant)) / (2 * a);
        realvalue2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %lf, x2 = %lf", realvalue1, realvalue2);
    }
    else if (discriminant == 0)
    {
        realvalue1 = -b / (2 * a);
        printf("x1 = %f", realvalue1);
    }
    else
    {
        return 0;
    }

	return 0;
}

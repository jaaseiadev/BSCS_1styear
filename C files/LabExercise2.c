#include <stdio.h>
#include <math.h>

int main(){

    //Number 1
    double input, output_inch, output_mm;

    printf("Enter the number of miles: ");
    scanf("%lf", &input);

    output_inch = 29.29 * exp(-0.2 * input);
    output_mm = output_inch * 25.4;

    printf("\n%lf In/Hg", output_inch);
    printf("\n%lf mm/Hg", output_mm);

/*
    //Number 2
    float t, cpi;

    printf("Input year(s): ");
    scanf("%f", &t);

    cpi = -0.2 * (pow(t,3)) + (3 * (pow(t,2))) + 100;

    printf("\nThe CPI of the input year(s) is %f", cpi);
*/

    //Number 3
    int inputSec, hour, min, sec;

    printf("Input sec(s): ");
    scanf("%d", &inputSec);

    hour = inputSec / 3600;
    min = (inputSec % 3600) / 60;
    sec = (inputSec % 3600) % 60;

    printf("\n%d seconds \n", inputSec);
    printf("%d hours, %d minutes and %d seconds", hour,min,sec);



    return 0;


}
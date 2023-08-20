#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    float initialtemp;
    float temp;
    char unit;

    printf("\nIs your unit in Celcius or Fareinheit? [C/F]");
    scanf("%s", &unit);

    unit = toupper(unit);

    if( unit == 'C'){
        printf("Enter the temperature you want to convert from Celcius to Fareinheit: ");
        scanf("%f", &initialtemp);
        printf("\nCelius : %.0f", initialtemp);
        temp = (initialtemp * 9 / 5) + 32;
        printf("\nFarenheit: %.1f", temp);
    }
    
    else if ( unit == 'F'){
        printf("Enter the temperature you want to convert from Fareinheit to Celcius: ");
        scanf("%f", &initialtemp);
        printf("Farenheit: %.1f", initialtemp);
        temp = ((initialtemp - 32)* 5) / 9;
        printf("\nCelius : %.0f", temp);
    }

    else{
        printf("Please Enter a Valid unit and try Again!!!!");
    }



 return 0;
}
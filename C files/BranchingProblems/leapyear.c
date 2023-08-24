#include <stdio.h>

int main(){

    //declaring variable
    int inputyear = 0;
    //user inputs
    printf("Enter the year: ");
    scanf("%d", &inputyear);

    //determines if its a leap year or not
    //leap years are divisible by 4
    //leap years can also be divisible by 100 but only if its also divisible by 400
    if(inputyear % 4 == 0 && inputyear % 100 == 0 && inputyear % 400 == 0){
        printf("\nIts a leap year");
    }
    
    else if(inputyear % 100 == 0 && inputyear % 400 == 0){
        printf("its a leap year");
    }
    else {
        printf("not a leap year1");
    }

return 0;
}
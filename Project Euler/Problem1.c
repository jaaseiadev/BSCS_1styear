#include <stdio.h>
/*
Problem 1: Multiples of 3 and 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below the provided parameter value number.
*/
int multiplesOf3and5(number) {
    int sum = 0;
    for( int i = 1; i <= number; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum = i + sum;
            printf("\n%d", i);
        }
        
    }
    printf("\nThe sum of all the numers is: %d", sum);
     return sum;
}

int main(){

multiplesOf3and5(10);
    return 0;
}
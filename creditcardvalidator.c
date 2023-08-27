#include <stdio.h>
#include <string.h>

int main(){
    int sum_of_odd = 0;
    int sum_of_even = 0;
    char credit_number [] = {"4847352989263094"};
    int right = strlen(credit_number) - 1;

    while (right > 0) {
        if (credit_number[right--] % 2 != 0) {
            return 0;
            // will return from here
        }



    return 0;
}
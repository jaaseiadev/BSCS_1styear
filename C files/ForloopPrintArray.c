#include <stdio.h>

int main(){

    double prices[] = {5.0, 6.9, 9.6, 1.0, 2.10, 3.4, 3.5 };

    for(int i = 0 ; i < sizeof(prices) / sizeof(prices[0]); i++){
        printf("\n$%.2lf", prices[i]);
    }



    return 0;
}
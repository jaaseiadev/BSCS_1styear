#include <stdio.h>

int main()
{
    int divisor = 10;
    int dividend = 3;
    int remainder = 0;

    while (divisor > dividend)
    {
        divisor = divisor - dividend;
        remainder = remainder + 1;
        
    }
    
    printf("Quotient:%d\t", remainder);
    printf("Remainder = %d", divisor);

    return 0;
}
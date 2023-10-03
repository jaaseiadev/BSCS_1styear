#include <stdio.h>
#include <math.h>

int main()
{
    long long int n;
    long long int m;
    long long int a;
    long long int output;

    scanf("%lld %lld %lld",  &n, &m, &a);

     n = ceil((double)n/a);
     m = ceil((double)m/a);
    output = n * m;

    printf("%lld", output);

    return 0;
}
#include <stdio.h>

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int n1;
    int input2;

    printf("Enter the first: ");
    scanf("%d", &n1);
    printf("Enter second: ");
    scanf("%d", &input2);

    for(int i = 1; i < input2; i++)
    {
        if(input2 % i == 0)
        {
            printf("\n%d", i);
            sum2 = sum2 + i;
        }
    }

    for(int i = 1; i < n1; i++)
    {
        if(n1 % i == 0)
        {
            sum1 = i + sum1;
        }
    }

    
    printf("\nSum1: %d", sum1);
    printf("\nSum2: %d", sum2);
    
    return 0;
}
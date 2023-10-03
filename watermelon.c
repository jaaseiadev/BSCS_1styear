#include <stdio.h>

int main()
{
    int weight;
    int output;
    scanf("%d", &weight);

    if(weight % 2 == 0 && weight != 2)
    {
        printf("YES");
    }
    else if(weight == 1)
    {
        printf("NO");
    }
    else if (weight == 2)
    {
        printf("NO");
    }
    else
    {
        printf("NO");
    }


    return 0;
}
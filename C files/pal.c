#include <stdio.h>

int main ()
{
    long long rem, num, temp, result, x, y, flag = 0;

    for(x = 999; x >= 900; x--)
    {
        for(y = 999; y >= 900; y--)
        {
            result = 0;
            temp = 0;
            num = 1;

            num = x * y;

            temp = num;

            while(num != 0)
            {
                rem = num % 10;
                result = result*10 + rem;
                num = num/10;
            }

            if(result == temp)
            {
                printf("%d", temp);

                flag = 1;

                break;
            }
        }
        if (flag == 1)
            break;
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

void main()
{
    int count = 0;
    for (int i = 101; i <= 200; i+=2)
    {
        int num = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
               num++;
            }
        }
        if (num == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("count = %d", count);
}
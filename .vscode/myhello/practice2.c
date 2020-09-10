#include <stdio.h>

void main()
{
    int count = 0;
    int i = 100;
    while (i <= 200)
    {
        if (i % 3 == 0)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
        count++;
    }
    printf("count = %d", count);
}
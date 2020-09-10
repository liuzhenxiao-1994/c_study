#include <stdio.h>

void main()
{
    int i = 1;
    int a, b, c;
    while (i <= 40)
    {
        if (i <= 2)
        {
            a = 1;
        }
        else
        {
            a = b + c;
        }
        c = b;
        b = a;
        i++;
        printf("%d\n", a);
    }
    printf("count = %d", i - 1);
}
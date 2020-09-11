#include <stdio.h>

void main()
{
    int i, a[5] = {0, 1, 2, 3, 4};
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}
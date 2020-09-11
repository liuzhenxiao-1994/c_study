#include <stdio.h>

void main()
{
    int a[20] = {1, 1};
    printf("a1 = %d\n", a[0]);
    printf("a2 = %d\n", a[1]);
    for (int i = 2; i < 20; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        printf("a%d = %d\n", i + 1, a[i]);
    }
}
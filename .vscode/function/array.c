#include <stdio.h>

void test(int b[10]);

void main()
{
    int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    test(a);

    putchar('\n');
}

void test(int b[10])
{
    int i = 0; 
    for( ; i< 10; i++)
    {
        printf("%d ", b[i]);
    }
}
#include <stdio.h>

long recursion(int x);

long main()
{
    int a, b;
    printf("请输入一个数: \n");
    scanf("%d", &a);
    b = recursion(a);
    printf("b = %d", b);
    return b;
}

long recursion(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    if (x < 1)
    {
        return -1;
    }
    while (x > 1)
    {
        x *= recursion(x - 1);
        return x;
    }
}
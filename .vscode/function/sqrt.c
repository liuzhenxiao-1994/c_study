#include <stdio.h>

void main()
{
    int sqrts(int x);
    int x, y;
    printf("enter a integer: \n");
    scanf("%d", &x);
    y = sqrts(x);
    if (y == -1)
    {
        printf("该数字没有整数平方根");
    }
    else
    {
        printf("%d的开方为: %d, %d", x, y, -y);
    }
}

int sqrts(int x)
{
    for (int i = 1; i < x / 2; i++)
    {
        if (i * i == x)
        {
            return i;
        }
        if (i * i > x)
        {
            return EOF;
        }
    }
}
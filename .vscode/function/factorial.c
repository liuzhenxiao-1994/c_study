#include <stdio.h>

int square(int x);
int factorial(int y);

int main()
{
    int a, b, c;
    printf("请输入两个数: \n");
    scanf("%d, %d", &a, &b);
    c = factorial(square(a)) + factorial(square(b));
    printf("c = %d\n", c);
    return c;
}

int square(int m)
{
    return m * m;
}

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    int j = 1;
    for (int i = n; i >= 1; i--)
    {
        j = j * i;
    }
    return j;
}
#include <stdio.h>

void main()
{
    int max(int x, int y);
    int a, b, c;
    printf("请输入要比较的两个数: \n");
    scanf("%d %d", &a, &b);
    c = max(a, b);
    printf("较大的数为: %d", c);
}

int max(int x, int y)
{
    return x > y ? x : y;
}
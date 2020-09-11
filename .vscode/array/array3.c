#include <stdio.h>

void main()
{
    int a[10];
    int temp;
    printf("请输入10个数: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("排序后的数组: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}
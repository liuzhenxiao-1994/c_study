#include <stdio.h>

void main()
{
    printf("请输入9个整数: \n");
    int a[3][3];
    scanf("%d %d %d\n", &a[0][0], &a[0][1], &a[0][2]);
    scanf("%d %d %d\n", &a[1][0], &a[1][1], &a[1][2]);
    scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 || j == 1)
            {
                printf("%d\t", a[i][j]);
            }
            else
            {
                printf("\t");
            }
            if (j == 2 && i < 2)
            {
                printf("\n");
            }
            
        }
    }
}
#include <stdio.h>

void main()
{
    int a[3][4] = {{21, 55, 43, 21}, {32, 321, 42213, 423}, {543, 121, 43, 3}};
    int max = a[0][0], row, col;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    printf("max = %d\n", max);
    printf("row = %d\n", row);
    printf("col = %d\n", col);
}
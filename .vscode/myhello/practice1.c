#include <stdio.h>

void main()
{
    int count = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (k != i && k != j && i != j)
                {
                    printf("%d", i * 100 + j * 10 + k);
                    printf("\n");
                    count++;
                }
            }
        }
    }
    printf("count = %d", count);
}
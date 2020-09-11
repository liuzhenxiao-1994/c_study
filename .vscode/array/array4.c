#include <stdio.h>

void main()
{
    int a[5][3] = {{80, 75, 92}, {61, 65, 71}, {59, 63, 70}, {85, 87, 90}, {76, 77, 85}};
    int mathTotal, cTotal, foxproTotal = 0;
    float mathAvg, cAvg, foxproAvg, totalAvg = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                mathTotal += a[i][j];
            }
            else if (j == 1)
            {
                cTotal += a[i][j];
            }
            else
            {
                foxproTotal += a[i][j];
            }
            printf("%d\n", a[i][j]);
        }
    }
    mathAvg = mathTotal / 5.0;
    cAvg = cTotal / 5.0;
    foxproAvg = foxproTotal / 5.0;
    totalAvg = (mathAvg + cAvg + foxproAvg) / 3;
    printf("mathAvg = %f\n", mathAvg);
    printf("cAvg = %f\n", cAvg);
    printf("foxproAvg = %f\n", foxproAvg);
    printf("totalAvg = %f\n", totalAvg);
    
}
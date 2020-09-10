#include <stdio.h>
#include <math.h>

void main()
{
    int a = 1;
    double target = 1e-8;
    double x = 0;
    int i = 1;
    while (fabs(1.0 / i) > target)
    {
       if (a % 2 == 0)
        {
            i = -i;
        }
        x = x + 1.0 / i;
        a++;
        i = fabs(i);
        i += 2;
    }
    printf("π 的近似值为: %.8f\n", 4 * x);
    printf("π 的近似值为: %.6f", 4 * x);
}
#include <stdio.h>

void main()
{
    // float f = 5.75;
    // printf("(int) f = %d, f = %f\n", (int) f, f);

    // printf("%d, %d\n", 20 / 7, -20 / 7);
    // printf("%f, %f\n", 20.0 / 7, -20.0 / 7);
    // printf("%d\n", 100 % 3);

    int a = 2, b = 4, c = 6, x, y;
    y = ((x = a + b), (b + c));
    printf("y = %d, x = %d", y, x);
}
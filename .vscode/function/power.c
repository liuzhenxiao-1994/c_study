#include <stdio.h>

void main()
{
    double power(double x, double y);
    double a = 2.0, b = 3.0, c;
    c = power(a, b);
    printf("%lf的%lf次方为: %lf", a, b, c);
}

double power(double x, double y)
{
    double z = x;
    for (int i = 1; i < y; i++)
    {
        x *= z;
    }
    return x;
}
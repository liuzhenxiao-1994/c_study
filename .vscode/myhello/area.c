#include <stdio.h>
#include <math.h>

void main()
{
    // 求三角形面积
    // double a, b, c, s;
    // printf("input three length of side: a, b, c\n");
    // scanf("%lf %lf %lf", &a, &b, &c);
    // s = (a + b + c) / 2;
    // printf("The area is %lf", sqrt(s * (s -a) * (s - b) * (s - c)));

    // 求根公式
    double a, b, c, p, q, x1, x2;
    printf("input three nums: a, b, c\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    p = -b / (2 * a);
    q = sqrt(b * b - 4 * (a * c)) / 2 * a;
    x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
    x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;
    printf("p = %f\nq = %f\np+q = %f\np-q = %f\nx1 = %f\nx2 = %f\n", p, q, p + q, p - q, x1, x2);
}
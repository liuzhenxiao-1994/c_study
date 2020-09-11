#include <stdio.h>
#include <math.h>

void main()
{
    int m;
    printf("Please input a integer num:\n");
    scanf("%d", &m);
    if (m <= 1)
    {
        printf("Please enter an integer greater than 1");
    }
    if (m == 2)
    {
        printf("true");
        return;
    }
    for (int i = 2; i <= sqrt(m) ; i++)
    {
        if (m % i == 0)
        {
            printf("false");
            return;
        }
    }
    printf("true");
}
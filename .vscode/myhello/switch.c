#include <stdio.h>

void main()
{
    int a, b;
    char c;
    printf("input expression a +(-, *, /) b: \n");
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case '+':
    {
        printf("a + b = %d\n", a + b);
        break;
    }
    case '-':
    {
        printf("a - b = %d\n", a - b);
        break;
    }
    case '*':
    {
        printf("a × b = %d\n", a * b);
        break;
    }
    case '/':
        if (b == 0)
        {
            printf("除数不能为零!");
        }
        else
        {
            printf("a ÷ b = %d······%d\n", a / b, a % b);
        }
        break;

    default:
    {
        printf("error");
        break;
    }
    }
}
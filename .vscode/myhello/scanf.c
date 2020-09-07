#include <stdio.h>

void main()
{
    // int a, b, c;
    // printf("input a, b, c\n");
    // scanf("%d%d%d", &a, &b, &c);
    // printf("a = %d, b = %d, c = %d", a, b, c);

    char a, b, c;
    printf("input character a, b, c\n");
    scanf("%c %c %c", &a, &b, &c);
    printf("%d, %d, %d\n%c, %c, %c\n", a, b, c, a - 32, b - 32, c - 32);
}
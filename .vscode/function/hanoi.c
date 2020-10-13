#include <stdio.h>

/**
 * 汉诺塔问题
*/
void main()
{
    /*声明hanoi函数*/
    void hanoi(int n, char A, char B, char C);
    int m;
    printf("请输入要移动几个盘子: \n");
    scanf("%d", &m);
    printf("移动的步骤为: \n");
    hanoi(m, 'A', 'B', 'C');
}

/*定义hanoi函数, 将n个盘子从A座借助B座移动到C座*/
void hanoi(int n, char A, char B, char C)
{
    void move(char x, char y);
    if (n == 1)
    {
        move(A, C);
    }
    else
    {
        hanoi(n - 1, A, C, B);
        move(A, C);
        hanoi(n - 1, B, A, C);
    }
}

void move(char x, char y)
{
    printf("%c-->%c\n", x, y);
}
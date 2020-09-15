#include <stdio.h>

void main()
{
    int num[10] = {0}, blank = 0, others = 0, c;
    printf("Please enter some chars: \n");
    while (c = getchar() != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            blank++;
        }
        else if (c >= 48 && c <= 57)
        {
            switch (c)
            {
            case '0':
            {
                num[0]++;
            }
            case '1':
            {
                num[1]++;
            }
            case '2':
            {
                num[2]++;
            }
            case '3':
            {
                num[3]++;
            }
            case '4':
            {
                num[4]++;
            }
            case '5':
            {
                num[5]++;
            }
            case '6':
            {
                num[6]++;
            }
            case '7':
            {
                num[7]++;
            }
            case '8':
            {
                num[8]++;
            }
            case '9':
            {
                num[9]++;
            }
            }
        }
        else
        {
            others++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
    }
    printf("blank = %d\n", blank);
    printf("others = %d\n", others);
}
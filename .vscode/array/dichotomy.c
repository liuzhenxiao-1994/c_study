#include <stdio.h>
#define M 10

void main()
{
    static int a[M] = {-9, -5, -3, 0, 1, 5, 7, 14, 20, 43};
    int n, min, mid, max, found;
    min = 0;
    max = M - 1;
    printf("Please enter your search number: \n");
    scanf("%d", &n);
    while (1)
    {
        mid = (min + max) / 2;
        if (min > max)
        {
            printf("您输入的数不在数组中!");
            break;
        }
        if (a[mid] > n)
        {
            max = mid - 1;
            continue;
        }
        else if (a[mid] < n)
        {
            min = mid + 1;
            continue;
        }
        else
        {
            found = mid;
            printf("找到了: 下标found = %d\n", found);
            break;
        }
    }
}
//P229 6
#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int combination(int m, int n);

int main()
{
    int m = 8, n = 3;
    printf("%d\n", combination(m, n));

    system("pause");
    return 0;
}

int factorial(int num)
{
    if (num < 0)
    {
        printf("Input error!\n");
        return -1;
    }
    else if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int combination(int m, int n)
{
    if (m >= 0 && n >= 0)
        if (m < n)
        {
            printf("Input error!\n");
            return -1;
        }
        else
            return factorial(m) / (factorial(n) * factorial(m - n));
    else
    {
        printf("Input error!\n");
        return -1;
    }
}
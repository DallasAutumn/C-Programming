//P286:7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 20

int numpal(int n);
int getDigit(int n, int i);

int main()
{
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Plz enter a number:\n");
        scanf("%d", &num);
        printf("Input %d, result:%d\n", num, numpal(num));
    }
    return 0;
}

int numpal(int n)
{
    char str[M];
    sprintf(str, "%d", n);
    int len = strlen(str);

    for (int i = 1; i <= len / 2; i++)
        if (getDigit(n, i) == getDigit(n, len + i - 1))
            return 1;
    return 0;
}

int getDigit(int n, int i)
{
    if (i == 1)
        return n % 10;
    else
        return getDigit(n / 10, i - 1);
}
//P285:3
#include <stdio.h>

int arithmeticSequence(int firstItem, int commonDifference, int itemIndex);

int main()
{
    printf("%d", arithmeticSequence(0, 1, 10));
    return 0;
}

int arithmeticSequence(int a, int d, int n)
{
    if (n == 1)
        return a;
    else
        return d + arithmeticSequence(a, d, n - 1);
}
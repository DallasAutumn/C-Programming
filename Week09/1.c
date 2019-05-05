#include <stdio.h>
#include <stdlib.h>

int recursiveReverse(int);

int main()
{
    recursiveReverse(1234);
    return 0;
}

int recursiveReverse(int num)
{
    if (num > 0)
    {
        printf("%d", num % 10);
        recursiveReverse(num / 10);
    }
}
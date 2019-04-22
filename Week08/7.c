//How many are the peaches?
#include <stdio.h>
#include <stdlib.h>

int eatPeach(int n);

int main()
{
    int n = 10;
    printf("n = %d, total: %d\n", n, eatPeach(n));
    system("pause");
    return 0;
}

int eatPeach(int n)
{
    int peach = 1;

    for (n; n >= 1; n--)
    {
        peach = (peach + 1) * 2;
    }

    return peach;
}
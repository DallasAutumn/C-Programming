//《现代方法》P153：7
#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);

int main()
{
    printf("%d", power(2, 9));
    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return x * power(x, n - 1);
}
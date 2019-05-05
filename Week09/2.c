//Fibonacci P285:1
#include <stdio.h>

int fib(int num);

int main()
{
    printf("%d", fib(8));
    return 0;
}

int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
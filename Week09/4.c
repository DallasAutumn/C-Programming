//P286:6
#include <stdio.h>

int gcd(int num1, int num2);
int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    printf("%d", gcd(320, 116));
    return 0;
}

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

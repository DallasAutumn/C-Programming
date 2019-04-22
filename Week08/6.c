//Add two fractions
#include <stdio.h>
#include <stdlib.h>

int maxPrime(int, int);
// int fractionAdd(int numerator1, int denominator1, int numerator2, int denominator2);

int main()
{
    int n1, d1, n2, d2, n3, d3;
    printf("Plz enter an add formula:\n");
    scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

    if (d1 == 0 || d2 == 0)
    {
        printf("Input error!\n");
        return -1;
    }
    else
    {
        n3 = n1 * d2 + n2 * d1;
        d3 = d1 * d2;
        int prime = maxPrime(n3, d3);
        n3 /= prime;
        d3 /= prime;
    }

    if (d3 == 1)
        printf("%d\n", n3);
    else
        printf("%d/%d\n", n3, d3);

    system("pause");
    return 0;
}

int maxPrime(int m, int n)
{
    int i;
    i = (m < n) ? m : n;

    while (i > 0)
    {
        if (m % i == 0 && n % i == 0)
            return i;
        i--;
    }
}

//Simplify fraction
#include <stdio.h>
#include <stdlib.h>

int MaxPrime(int, int);

int main()
{
    int numerator, denominator;
    printf("plz enter a fraction:\n");
    scanf("%d/%d", &numerator, &denominator);

    if (denominator == 0)
    {
        printf("Input error!\n");
        return -1;
    }

    int prime = MaxPrime(numerator, denominator);
    numerator /= prime;
    denominator /= prime;

    if (denominator == 1)
        printf("%d\n", numerator);
    else
        printf("%d/%d\n", numerator, denominator);

    system("pause");
    return 0;
}

int MaxPrime(int m, int n)
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
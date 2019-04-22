//P49 6
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 12

int checkDigit(long long);

int main()
{
    long long ean;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%lld", &ean);
    printf("EAN = %lld\n", ean);
    printf("Check Digit: %d\n", checkDigit(ean));

    system("pause");
    return 0;
}

int checkDigit(long long ean)
{
    int input[MAXLEN];
    int sum1 = 0, sum2 = 0;

    for (int n = 0; n < MAXLEN; n++)
    {
        if (ean > 0)
        {
            int r = ean % 10;
            //printf("%d", r);
            input[n] = r;
            ean /= 10;
        }
    }

    for (int i = 1; i <= MAXLEN - 1; i += 2)
    {
        // printf("%d", input[i]);
        sum2 += input[i];
    }

    // printf("\n");

    for (int j = 0; j <= MAXLEN - 2; j += 2)
    {
        // printf("%d", input[j]);
        sum1 += input[j];
    }

    printf("\n");
    // printf("sum1=%d, sum2=%d\n", sum1, sum2);

    int check = 9 - (3 * sum1 + sum2 - 1) % 10;

    return check;
}
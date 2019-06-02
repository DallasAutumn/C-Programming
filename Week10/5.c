//P281 2
#include <stdio.h>
#include <stdlib.h>

void liquid(int totalCups, int *gallons, int *quarts, int *pints, int *cups);

int main()
{
    int gallons, quarts, pints, cups;
    int totalCups = 85;
    liquid(totalCups, &gallons, &quarts, &pints, &cups);
    printf("%d totalCups = %dgallons + %dquarts + %dpints + %dcups\n", totalCups, gallons, quarts, pints, cups);
    system("pause");
    return 0;
}

void liquid(int totalCups, int *g, int *q, int *p, int *c)
{
    int gallons = totalCups / 16;
    int quarts = (totalCups - 16 * gallons) / 4;
    int pints = (totalCups - 16 * gallons - 4 * quarts) / 2;
    int cups = totalCups - 16 * gallons - 4 * quarts - 2 * pints;

    *g = gallons;
    *q = quarts;
    *p = pints;
    *c = cups;
}
//P281 5
#include <stdio.h>
#include <stdlib.h>

void yrCalc(long, int *, int *, int *);

int main()
{
    int totalDays = 1725081;
    int year, month, day;
    yrCalc(totalDays, &year, &month, &day);
    printf("%d.%d.%d\n", year, month, day);
    system("pause");
    return 0;
}

void yrCalc(long totalDays, int *y, int *m, int *d)
{
    int years = totalDays / 360;
    int months = (totalDays - 360 * years) / 30;
    int days = totalDays - 360 * years - 30 * months;

    *y = 1900 + years;
    *m = 1 + months;
    *d = 1 + days;
}
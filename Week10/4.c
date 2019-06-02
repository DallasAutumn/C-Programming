//P275 6
#include <stdio.h>
#include <stdlib.h>

void date(long dateInt, int *year, int *month, int *day);

int main()
{
    int year, month, day;
    date(20070412, &year, &month, &day);
    printf("year=%d, month=%d, day=%d\n", year, month, day);
    system("pause");
    return 0;
}

void date(long dateInt, int *y, int *m, int *d)
{
    int year = dateInt / 10000;
    int month = (dateInt - 10000 * year) / 100;
    int day = dateInt - 10000 * year - 100 * month;

    *y = year;
    *m = month;
    *d = day;
}
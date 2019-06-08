//P462 2
#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int month;
    int day;
    int year;
};

int days(Date);
int difDays(Date, Date);

int main()
{
    struct Date date1, date2;
    scanf("%d %d %d", &date1.year, &date1.month, &date1.day);
    scanf("%d %d %d", &date2.year, &date2.month, &date2.day);
    printf("dif = %d\n", difDays(date1, date2));
    system("pause");
    return 0;
}

int days(struct Date date)
{
    return (date.year - 1900) * 360 + (date.month - 1) * 30 + (date.day - 1);
}

int difDays(struct Date date1, struct Date date2)
{
    return days(date2) - days(date1);
}
//P462 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 20

typedef struct
{
    char *month;
    char *day;
    char *year;
} Date;

char *larger(char *, char *);

int main()
{
    Date date;
    char date1[M], date2[M];
    strcpy(date1, "10/9/2001");
    strcpy(date2, "11/3/2001");
    char *ret = larger(date1, date2);
    printf("%s\n", ret);
    const char sep[2] = "/";
    date.month = strtok(ret, sep);
    date.day = strtok(NULL, sep);
    date.year = strtok(NULL, sep);
    printf("%s.%s.%s\n", date.year, date.month, date.day);
    system("pause");
    return 0;
}

char *larger(char *date1, char *date2)
{
    return (strcmp(date1, date2) > 0) ? date1 : date2;
}
//24h -> 12h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hour, minute;
    printf("Plz enter the time like the format 00:00\n");
    scanf("%d:%d", &hour, &minute);

    if (hour >= 00 && hour < 12)
        printf("%d:%02d AM\n", hour, minute);
    else if (hour == 12)
    {
        if (minute == 00)
            printf("12:00");
        else
            printf("%d:%02d AM\n", hour, minute);
    }
    else
        printf("%d:%02d PM\n", hour - 12, minute);

    system("pause");
    return 0;
}
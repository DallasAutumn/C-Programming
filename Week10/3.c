//P275 4
#include <stdio.h>
#include <stdlib.h>

void time(int totSec, int *h, int *m, int *s);

int main()
{
    int hours, mins, secs;
    int *h = &hours, *m = &mins, *s = &secs;
    time(36251, h, m, s);
    printf("%dh %dm %ds\n", hours, mins, secs);

    system("pause");
    return 0;
}

void time(int totSec, int *h, int *m, int *s)
{
    int hours = totSec / 3600;
    int mins = (totSec - 3600 * hours) / 60;
    int secs = (totSec - 3600 * hours - 60 * mins);

    *h = hours;
    *m = mins;
    *s = secs;
}
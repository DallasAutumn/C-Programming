//《现代方法》P293,5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define M 1
#define LEN 20

typedef struct
{
    int dep;
    int arr;
} Flight;

int main()
{
    Flight flight[8];
    int hour, min, dif = 10000, j = 0;

    flight[0].dep = 480, flight[0].arr = 616;
    flight[1].dep = 583, flight[1].arr = 712;
    flight[2].dep = 679, flight[2].arr = 811;
    flight[3].dep = 767, flight[3].arr = 900;
    flight[4].dep = 840, flight[4].arr = 968;
    flight[5].dep = 945, flight[5].arr = 1075;
    flight[6].dep = 1140, flight[6].arr = 1280;
    flight[7].dep = 1305, flight[7].arr = 1438;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    for (int i = 0; i < 8; i++)
        if (dif > abs(60 * hour + min - flight[i].dep))
        {
            dif = abs(60 * hour + min - flight[i].dep);
            j = i;
        }
    printf("The closest departure time is %d:%02d, arriving at %d:%02d\n", flight[j].dep / 60, flight[j].dep % 60, flight[j].arr / 60, flight[j].arr % 60);
    system("pause");
    return 0;
}
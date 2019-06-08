//P456,4
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number;
    int miles;
    int gallons;
} carLog;

int main()
{
    int totalMiles = 0, totalGals = 0;
    carLog logs[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %d", &logs[i].number, &logs[i].miles, &logs[i].gallons);
        totalMiles += logs[i].miles;
        totalGals += logs[i].gallons;
    }

    printf("----------------------------\n");
    printf("number  miles/gallon\n");
    for (int i = 0; i < 5; i++)
        printf("%d\t%d\n", logs[i].number, logs[i].miles / logs[i].gallons);
    printf("team:\t%d\n", totalMiles / totalGals);
    printf("----------------------------\n");

    system("pause");
    return 0;
}
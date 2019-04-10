//P191 Q7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 28000, years = 7, vel = 4000, acc_dep = 0;

    printf("\t\t DEPRECIATION SCHEDULE\n");
    printf("\t\t ---------------------\n");
    printf("YEAR DEPRECIATION END-OF-YEAR-VALUE ACCUMULATED-DEPRECIATION\n");

    for (int i = 1; i <= years; i++)
    {
        total -= vel;
        acc_dep += vel;
        printf("%d\t%d\t\t%d\t\t\t%d\n", i, vel, total, acc_dep);
    }

    system("pause");
    return 0;
}
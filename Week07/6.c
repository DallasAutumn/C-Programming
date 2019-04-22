//P249 13
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NightNum 500.0

int main()
{
    int count = 0;
    srand(time(NULL));

    for (int i = 1; i <= NightNum; i++)
    {
        int step = 0, r = 0;
        do
        {
            r = rand() % 100 + 1;

            if (r < 50)
                step += 2;
            else
                step -= 1;

            if (step == 0)
                break;
        } while (step < 10);

        if (step)
            count += 1;

        printf("Day%d, count=%d\n", i, count);
    }

    printf("prob = %lf\n", count / NightNum);
    system("pause");
    return 0;
}

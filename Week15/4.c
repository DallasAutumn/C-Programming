//P407,4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[] = "Pollen.dat";
    int cnt, counts[10], total = 0;
    double oldAvg, newAvg;
    FILE *fp;

    printf("Plz enter a new pollen count: ");
    scanf("%d", &cnt);

    fp = fopen(fileName, "r");
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%d", &counts[i]);
        total += counts[i];
    }
    fclose(fp);

    oldAvg = total / 10;
    total = total - counts[0] + cnt;
    newAvg = total / 10;
    for (int i = 0; i < 9; i++)
        counts[i] = counts[i + 1];
    counts[9] = cnt;

    fp = fopen(fileName, "w");
    for (int i = 0; i < 10; i++)
        fputc(counts[i], fp);
    fclose(fp);

    printf("Old average value: %lf", oldAvg);
    printf("New average value: %lf", newAvg);
    system("pause");
    return 0;
}
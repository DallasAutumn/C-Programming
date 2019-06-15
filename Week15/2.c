//P392,6
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char id[20];
    double perHour;
    int time;
    double total;
} Info;

int main()
{
    FILE *fp;
    fp = fopen("2.txt", "r");
    Info info[4];

    for (int i = 0; i < 4; i++)
    {
        char line[100];
        fgets(line, sizeof(line), fp);
        sscanf(line, "%s %s %lf %d", info[i].name, info[i].id, &info[i].perHour, &info[i].time);
        info[i].total = info[i].perHour * info[i].time;
    }

    printf("name\t\tid\t\ttotal\n");
    for (int i = 0; i < 4; i++)
        printf("%s\t%s\t%lf\n", info[i].name, info[i].id, info[i].total);

    system("pause");
    return fclose(fp);
}

//P275 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 20

int secsa(char[]);

int main()
{
    char buff[100];
    strcpy(buff, "10h0m0s");
    printf("%d\n", secsa(buff));

    system("pause");
    return 0;
}

int secsa(char time[])
{

    char hour[M], min[M], sec[M];
    //time is as the format of "00h00m00s"
    char seps[] = "hms";
    strcpy(hour, strtok(time, seps));
    strcpy(min, strtok(NULL, seps));
    strcpy(sec, strtok(NULL, seps));

    int h = atoi(hour);
    int m = atoi(min);
    int s = atoi(sec);

    return 3600 * h + 60 * m + s;
}

void secsb(char time[], int *p)
{
    //int *p = &totSec
    char hour[M], min[M], sec[M];
    //time is as the format of "00h00m00s"
    char seps[] = "hms";
    strcpy(hour, strtok(time, seps));
    strcpy(min, strtok(NULL, seps));
    strcpy(sec, strtok(NULL, seps));

    int h = atoi(hour);
    int m = atoi(min);
    int s = atoi(sec);

    *p = 3600 * h + 60 * m + s;
}

//I hate Segmentation Fault exception forever!
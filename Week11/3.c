//P306 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcAvg(int array[], int arrLen);
double variance(int array[], int arrLen);

int main()
{
    int testVals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
    int len = sizeof(testVals) / sizeof(testVals[0]);
    printf("avg=%lf\nvar=%lf\n", calcAvg(testVals, len), variance(testVals, len));
    system("pause");
    return 0;
}

double calcAvg(int array[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += array[i];
    double avg = sum / len;
    return avg;
}

double variance(int array[], int len)
{
    double avg = calcAvg(array, len);
    double SST = 0;
    int arrLen = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < len; i++)
        SST += pow((array[i] - avg), 2);
    double var = SST / len;
    return var;
}
//Index Distribution
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAXNUM 100
#define LAMBDA 5.0

double randomExponential(double);

int main()
{
    for (int i = 0; i < MAXNUM; i++)
    {
        printf("%lf\n", randomExponential(LAMBDA));
    }
    system("pause");
    return 0;
}

double randomExponential(double lambda)
{
    double pv = 0.0;
    do
    {
        pv = (double)(rand() % 100) / 100;
    } while (pv == 0);
    pv = (-1 / lambda) * log(1 - pv);
    return pv;
}

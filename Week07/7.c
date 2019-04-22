//Gaussian Distribution
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAXNUM 100
double genGaussianRand();

int main()
{
    srand(time(NULL));
    for (int i = 0; i < MAXNUM; i++)
    {
        printf("%lf\n", genGaussianRand());
    }
    system("pause");
    return 0;
}

double genGaussianRand()
{
    static double U1, U2;
    static int phase = 0;
    double Z;

    U1 = rand() * (1.0 / RAND_MAX);
    U2 = rand() * (1.0 / RAND_MAX);

    if (phase == 0)
        Z = sqrt(-2.0 * log(U1)) * sin(2.0 * M_PI * U2);
    else
        Z = sqrt(-2.0 * log(U1)) * cos(2.0 * M_PI * U2);

    phase = 1 - phase;
    return Z;
}
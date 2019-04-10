//P202 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DUE 10
#define COUNT 7
#define delta 0.01

int main()
{
    double init = 1000.0;

    for (int i = 0; i < COUNT; i++) //Outer loop 7
    {
        double rate = 0.06 + i * delta;
        printf("rate:%lf", rate);

        for (int year = 1; year <= DUE; year++) //Inner loop 10
        {
            printf("\t %lf", init * pow(1 + rate, year));
        }

        printf("\n");
    }

    system("pause");
    return 0;
}
//P116 Q6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Interest(double X, int N, double R)
{
    //The annual interest rate is %R
    double A = X * pow(1.0 + R / 100, N);
    return A;
}

int main()
{
    double R, X, A;
    int N;
    while (1)
    {
        printf("Enter the amount of the initial deposit:\n");
        scanf("%lf", &X);
        printf("Enter the number of years:\n");
        scanf("%d", &N);
        printf("Enter the annual interest rate:\n");
        scanf("%lf", &R);

        A = Interest(X, N, R);
        printf("The compound interest is %lf\n\n", A);
    }

    return 0;
}
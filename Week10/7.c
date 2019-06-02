#include <stdio.h>
#include <stdlib.h>

void larger_of(double *, double *);

int main()
{
    double x = 1.5, y = 2.7;
    larger_of(&x, &y);
    printf("x=%lf, y=%lf\n", x, y);
    system("pause");
    return 0;
}

void larger_of(double *px, double *py)
{
    if (*px < *py)
        *px = *py;
    else
        *py = *px;
}
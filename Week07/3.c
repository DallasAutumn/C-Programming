#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define epsilon 1e-6 //absloute error

int main()
{
    int i = 0;
    double sum = 0, pi = 0;
    double u;
    time_t start, end;

    //start = time(NULL);

    do
    {
        u = pow(-1.0, i) / (2 * i + 1);
        sum += u;
        printf("u=%lf, sum=%lf\n", u, 4.0 * sum);
        i++;
    } while (fabs(u) > epsilon);
    pi = 4.0 * sum;

    //end = time(NULL);

    printf("pi = %.10f\n", pi);
    printf("time = %d\n", difftime(end, start));
    system("pause");
    return 0;
}
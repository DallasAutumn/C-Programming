#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double harmonicMean(double, double);

int main()
{
    srand(time(NULL));
    printf("%d\n", rand());

    system("pause");
    return 0;
}

double harmonicMean(double a, double b)
{
    return 2 * a * b / (a + b);
}
//calculate a series
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double seriesSum(int num);
int fibonacci(int num);

int main()
{
    for (int n = 1; n <= 1000; n++)
        printf("n = %d, sum=%lf\n", n, seriesSum(n));

    system("pause");
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
    //return fibonacci(n - 1) + fibonacci(n - 2);
    {
        int a = 0, b = 1;
        for (int i = 1; i <= n; i++)
        {
            int temp1 = a;
            int temp2 = b;
            a = temp2;
            b = temp1 + temp2;
        }
        return a;
    }
}

double seriesSum(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(-1, i + 1) * fibonacci(i) / fibonacci(i + 1);

    return sum;
}
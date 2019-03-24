//P116 Q5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num;
    while (1)
    {
        printf("Input a positive number:\n");
        scanf("%lf", &num);
        printf("The 4-times square root is %lf\n", pow(num, 0.25));
    }

    return 0;
}
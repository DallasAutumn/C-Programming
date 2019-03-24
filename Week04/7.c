//P117 Q9
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double FreeFall(double height, double g)
{
    double velocity = sqrt(2 * g * height);
    return velocity;
}

int main()
{
    double g, h;
    for (int j = 0; j < 2; j++)
    {
        printf("Set the g,h initial height with a space seperated:\n");
        scanf("%lf %lf", &g, &h);
        printf("g = %lf, h = %lf \n", g, h);

        for (int i = 1; i <= 3; i++)
        {
            printf("k = %d, h= %lf, v= %lf\n", i, h, FreeFall(h, g));
            h = 2.0 / 3.0 * h;
        }
    }

    system("pause");
    return 0;
}
//P198 11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define delta 0.5

int main()
{
    double v = 500.0, theta = 22.8 / 180, totalTime = 10.0, t = 0;

    while (t <= totalTime)
    {
        double x = v * t * cos(theta);
        double y = v * t * sin(theta);
        printf("t=%lfs, x=%lf ,y=%lf \n", t, x, y);
        t += delta;
    }

    system("pause");
    return 0;
}

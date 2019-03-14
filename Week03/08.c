//P69 2.6: Q7
#include <stdio.h>
#include <stdlib.h>

float getSlope(float x1, float y1, float x2, float y2)
{
    if (x1 == x2)
        printf("Slope doesn't exist");
    else
        return (y2 - y1) / (x2 - x1);
}

int main()
{
    float x1 = 3.0, y1 = 7.0, x2 = 8.0, y2 = 12.0;
    float slope = getSlope(x1, y1, x2, y2);
    printf("Slope between (3,7) and (8,12) is %f\n", slope);

    x1 = 2.0, y1 = 10.0, x2 = 12.0, y2 = 6.0;
    slope = getSlope(x1, y1, x2, y2);
    printf("Slope between (2,10) and (12,6) is %f\n", slope);

    system("pause");
    return 0;
}
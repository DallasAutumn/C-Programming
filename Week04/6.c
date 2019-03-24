//P116 Q8
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distance(int x, int y)
{
    double dist = sqrt(x * x + y * y);

    if (dist - (int)(dist) < 0.5)
        return (int)(dist);
    else
        return (int)(dist) + 1;
}

int main()
{
    int x, y;
    printf("Enter x,y with a space seperated:\n");
    scanf("%d %d", &x, &y);
    int dist = distance(x, y);
    printf("The distance is %d\n", dist);

    system("pause");
    return 0;
}

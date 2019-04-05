//P139:Q6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_area(double a, double b, double c)
{
    double area;
    double s = (a + b + c) / 2;
    double t = s * (s - a) * (s - b) * (s - c);

    if (t < 0)
    {
        printf("not a triangle");
        return -1;
    }
    else
    {
        area = sqrt(t);
        return area;
    }
}

int main()
{
    double a, b, c;
    printf("Plz set a,b,c with spaces seperated:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("a=%lf, b=%lf, c=%lf\n", a, b, c);
    printf("area is %lf\n", calc_area(a, b, c));

    system("pause");
    return 0;
}
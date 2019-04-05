//P146:q3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temp;
    char type;

    printf("Plz input the temperature:\n");
    scanf("%lf %c", &temp, &type);
    if (type == 'f')
        printf("the celcius is %lf\n"), 5.0 / 9.0 * (temp - 32.0);
    else if (type == 'c')
        printf("the farenheit is %lf\n", 9.0 / 5.0 * temp + 32.0);
    else
        printf("Input err");
    system("pause");
    return 0;
}
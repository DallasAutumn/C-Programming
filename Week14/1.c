//P452 2
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    double div;
    double rate;
} Stock;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        Stock stock;
        printf("Plz enter the stock name, dividend and rate\n");
        scanf("%s %lf %lf", &stock.name, &stock.div, &stock.rate);
        printf("price = %lf\n", stock.div * stock.rate);
    }

    system("pause");
    return 0;
}
//P298 4
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int price[N], quantity[N], amount[N];

    printf("Plz enter the price and quantity with space separated\n");
    for (int i = 0; i < N; i++)
    {
        rewind(stdin);
        scanf("%d %d", &price[i], &quantity[i]);
        amount[i] = price[i] * quantity[i];
    }

    printf("Quantity\tPrice\tAmount\n");
    printf("--------\t-----\t------\n");
    for (int i = 0; i < N; i++)
        printf("%d\t\t%d\t\t%d\n", price[i], quantity[i], amount[i]);

    system("pause");
    return 0;
}

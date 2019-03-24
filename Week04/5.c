//P116 Q7
#include <stdio.h>
#include <stdlib.h>

#define TEXRATE 0.06

int main()
{
    double price, discount;
    int num;

    printf("Enter the price, amount and discount rate with spaces seperated\n");
    scanf("%lf %d %lf", &price, &num, &discount);

    double total = num * price;
    double discounted_total = total * (1 - discount);
    double tax = total * TEXRATE;
    double money = total + tax;

    printf("total: %lf\n", total);
    printf("discounted total: %lf\n", discounted_total);
    printf("Tax: %lf\n", tax);
    printf("Money should be paid:%lf \n", money);

    return 0;
}
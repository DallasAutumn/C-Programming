//Purchase fruits
#include <stdio.h>
#include <stdlib.h>

void purchase(double applePrice, double pearPrice, double watermelonPrice, double totalMoney, int total);

int main(void)
{
    purchase(4.0, 0.4, 0.2, 40.0, 100);
    system("pause");
    return 0;
}

void purchase(double ap, double pp, double wp, double money, int total)
{
    // int a = 0, p = 0, w = 0; //the amount of apple,pear,watermelon

    for (int a = 0; a <= money / ap; a++)
    {
        double cost_a = a * ap;
        for (int p = 0; p <= (money - cost_a) / pp; p++)
        {
            double cost_p = p * pp;
            for (int w = 0; w <= (money - cost_a - cost_p) / wp; w++)
            {
                if (a + p + w == total)
                    printf("Apple %d kg, pear %d kg, watermelon %d kg\n", a, p, w);
            }
        }
    }
}
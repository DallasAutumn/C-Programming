//P66 2.5: 6(a)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float paid = 10.00;
    float check = 6.07;

    int change = (paid - check) * 100; //cents
    int dollars = change / 100;        //dollars -> 100cents

    int cent25 = (change - 100 * dollars) / 25;
    int cent10 = (change - 100 * dollars - 25 * cent25) / 10;
    int cent5 = (change - 100 * dollars - 25 * cent25 - 10 * cent10) / 5;
    int cent1 = (change - 100 * dollars - 25 * cent25 - 10 * cent10 - 5 * cent5);

    printf("dollars: %d\n", dollars);
    printf("cent25: %d\n", cent25);
    printf("cent10: %d\n", cent10);
    printf("cent5: %d\n", cent5);
    printf("cent1: %d\n", cent1);

    system("pause");
    return 0;
}
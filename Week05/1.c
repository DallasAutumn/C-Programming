// P138,Q1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int numYrs;
        printf("Plz enter the num of years:\n");
        scanf("%d", &numYrs);

        if (numYrs > 5)
            printf("the rate is 7.5%\n");
        else if (numYrs >= 0 && numYrs <= 5)
            printf("the rate is 5.4%\n");
        else
            printf("input error!\n");
    }
    system("pause");
    return 0;
}
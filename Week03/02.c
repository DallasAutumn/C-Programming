//P39 2.1:print info

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char parts[10][10] = {"T1267", "T1300", "T2401", "T4482"};
    char prices[10][10] = {"$6.34", "$8.92", "$65.40", "$36.99"};
    printf("Part No \t Price \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s \t\t %s \n", parts[i], prices[i]);
    }
    system("pause");
    return 0;
}
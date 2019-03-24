//P87 3.1: Q3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 100;
    b = 0;

    //printf("%d", a - b = 25);(Invalid)
    printf("%d\n", a - (b = 25));
    system("pause");
    return 0;
}
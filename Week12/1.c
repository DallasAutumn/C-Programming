//P351 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

int main()
{
    char str[M];
    gets(str);

    for (int i = 0; i < strlen(str); i++)
        printf("%x\n", str[i]);

    system("pause");
    return 0;
}
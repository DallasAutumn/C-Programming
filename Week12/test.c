#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printLen(char[]);

int main()
{
    printLen("ad");
    system("pause");
    return 0;
}

int printLen(char str[])
{
    printf("%d\n", strlen(str));
}
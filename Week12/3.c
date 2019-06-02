//P372 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    int count = 0;
    while ((c = getchar()) != EOF)
        if (c == '.' || c == '!' || c == '?')
            count++;

    printf("sentence count = %d\n", count);

    system("pause");
    return 0;
}
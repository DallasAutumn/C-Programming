//P302 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;
    char strtest[] = "This is a test";

    for (i = 0; i <= 14; i++)
        printf("%c", strtest[i]);

    printf("\n");

    for (i = 10; i < 14; i++)
        printf("%c", strtest[i]);

    printf("\n");

    printf("%s\n", strtest);

    while (strtest[j] != '\0')
    {
        printf("%c", strtest[j]);
        j++;
    }
    printf("\n");

    system("pause");
    return 0;
}
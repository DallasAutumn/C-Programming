#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[3];
    printf("Enter a 3-digit number:\n");
    scanf("%s", num);
    for (int i = 2; i >= 0; i--)
    {
        printf("%c", num[i]);
    }

    system("pause");
    return 0;
}
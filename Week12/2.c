//P351 8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

void addChar(const char str[], char src[], int start);

int main()
{
    char message[M] = "mmmmmmmmmmmmmmmmmmm";
    addChar("forall", message, 6);
    puts(message);
    system("pause");
    return 0;
}

void addChar(const char str[], char src[], int start)
{
    int len = strlen(str);

    for (int j = strlen(src) - 1; j >= start - 1; j--)
        src[j + len] = src[j];

    for (int i = 0; i < len; i++)
        src[start - 1 + i] = str[i];
}
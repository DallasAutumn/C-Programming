//《现代方法》P127，14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

int main()
{
    char str[M];
    printf("Enter a sentence:");
    gets(str);

    int len = strlen(str);
    int s = len - 2;
    char punc = str[len - 1];
    int t;

    printf("Reversal of sentence:");
    for (int i = len - 2; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            t = i;
            for (int j = t; j <= s; j++)
                printf("%c", str[j]);
            s = t;
        }
    }
    for (int i = 0; i < s; i++)
        printf("%c", str[i]);
    printf("%c\n", punc);

    system("pause");
    return 0;
}
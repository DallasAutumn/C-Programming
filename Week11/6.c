//《现代方法》p127,16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define M 20

int zeroArray(int[], int);

int main()
{
    char word1[M], word2[M];
    int count[26];

    for (int i = 0; i < 26; i++)
        count[i] = 0;
    printf("Enter first word:");
    rewind(stdin);
    gets(word1);

    printf("Enter second word:");
    rewind(stdin);
    gets(word2);

    for (int i = 0; i < strlen(word1); i++)
    {
        if (isalpha(word1[i]))
            count[tolower(word1[i]) - 97] += 1;
    }

    for (int i = 0; i < strlen(word2); i++)
    {
        if (isalpha(word2[i]))
            count[tolower(word2[i]) - 97] -= 1;
    }

    if (zeroArray(count, 26))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    system("pause");
    return 0;
}

int zeroArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] != 0)
            return 0; //Not all zero
    }
    return 1;
}
//《现代方法》P222,1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 20

int main()
{
    char smallest_word[M] = "z", largest_word[M] = "\0", word[M];
    do
    {
        printf("Enter word:  ");
        rewind(stdin);
        gets(word);
        if (strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        if (strcmp(largest_word, word) < 0)
            strcpy(largest_word, word);
    } while (strlen(word) != 4);

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    system("pause");
    return 0;
}

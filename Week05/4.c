//P139:Q8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("Plz enter a letter:\n");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z')
        printf("%d\n", letter - 'a' + 1);
    else if (letter >= 'A' && letter <= 'Z')
        printf("%d\n", letter - 'A' + 1);

    system("pause");
    return 0;
}
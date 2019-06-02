//《现代方法》P127 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 80

void encrypt(char message[], int shiftAmount);

int main()
{
    char message[MAXLEN];
    int shiftAmount;

    printf("Enter message to be encrypted:");
    rewind(stdin);
    gets(message);

    printf("Enter shift amount (1-25):");
    rewind(stdin);
    scanf("%d", &shiftAmount);

    encrypt(message, shiftAmount);
    printf("Encrypted message: %s\n", message);

    system("pause");
    return 0;
}

void encrypt(char str[], int n)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
            str[i] = ((ch - 'a') + n) % 26 + 'a';
        if (ch >= 'A' && ch <= 'Z')
            str[i] = ((ch - 'A') + n) % 26 + 'A';
    }
}
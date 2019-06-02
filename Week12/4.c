//《现代方法》P221,12
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 20

void get_extension(const char *file_name, char *extension);

int main()
{
    // char file_name[M];
    char extension[M];
    // strcpy(file_name, "demo.txt");
    get_extension("demo.txt", extension);
    printf("%s\n", extension);

    system("pause");
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    int len = strlen(file_name);
    int i = 0, j = 0;

    while (file_name[i] != '.')
        i++;
    i++;

    for (i; i < len; i++)
        extension[j++] = file_name[i];
}
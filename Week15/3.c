//P395,3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    fp = fopen("text.dat", "r");

    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    printf("\n");

    rewind(fp);
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
        fseek(fp, 1L, SEEK_CUR);
    }
    printf("\n");
    system("pause");
    return 0;
}
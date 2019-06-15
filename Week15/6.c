//《现代方法》P416，3
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int flag = 0;

    for (int i = 0; i < argc; i++)
    {
        fp = fopen(argv[i], "r");
        if (fp)
        {
            flag = 1;
            while ((ch = fgetc(fp)) != EOF)
                putchar(ch);
        }
    }

    printf("\n");
    if (flag)
    {
        printf("Success!\n");
        return EXIT_SUCCESS;
    }
    else
    {
        printf("No file opened!\n");
        return EXIT_FAILURE;
    }
}
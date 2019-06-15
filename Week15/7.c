//《现代方法》P418,17
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char line[20], tel[20], top;

    if (argc)
    {
        fp = fopen(argv[1], "r");

        while (!feof(fp))
        {
            // memset(tel, 0, 20);
            fgets(line, sizeof(line), fp);
            top = -1;
            for (int i = 0; i < strlen(line); i++)
            {
                // if ('0' < line[i] < '9' || line[i] == '0' || line[i] == '9')
                if (isdigit(line[i]))
                    tel[++top] = line[i];
            }
            printf("(%c%c%c) %c%c%c-%c%c%c%c\n", tel[0], tel[1], tel[2], tel[3], tel[4], tel[5], tel[6], tel[7], tel[8], tel[9]);
        }
    }
    else
    {
        printf("Need a file name!\n");
        exit(EXIT_FAILURE);
    }

    system("pause");
    return EXIT_SUCCESS;
}
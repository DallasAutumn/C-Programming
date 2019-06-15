//《现代方法》P416,6
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LEN 10

int min(int, int);

int main(int argc, char *argv[])
{
    FILE *fp;
    long cur = 0L;
    char buf[LEN];

    if (argc != 2)
    {
        printf("Missing file name!\n");
        exit(EXIT_FAILURE);
    }
    
    fp = fopen(argv[1], "rb");
    printf("Offset                   Bytes                        Characters\n");
    printf("-------     -------------------------------           ----------\n");

    while (!feof(fp))
    {
        cur = ftell(fp);
        printf("%d\t", cur);
        int n = fread(buf, sizeof(char), LEN, fp);
        if (n <= LEN)
        {
            for (int i = 0; i < min(LEN, n); i++)
                printf("%02X ", buf[i]);
            printf("\t\t\t");
            for (int i = 0; i < min(LEN, n); i++)
                if (isprint(buf[i]))
                    putchar(buf[i]);
                else
                    putchar('.');
            printf("\n");
        }
    }

    system("pause");
    return fclose(fp);
}

int min(int a, int b)
{
    return (a < b) ? a : b;
} 
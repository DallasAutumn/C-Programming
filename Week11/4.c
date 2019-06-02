//P311 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

void printVowel(int, int, int, int, int);
void printStar(int);

int main()
{
    int acount = 0, ecount = 0, icount = 0, ocount = 0, ucount = 0;
    char str[M];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a':
        {
            acount++;
            break;
        }
        case 'e':
        {
            ecount++;
            break;
        }
        case 'i':
        {
            icount++;
            break;
        }
        case 'o':
        {
            ocount++;
            break;
        }
        case 'u':
        {
            ucount++;
            break;
        }
        default:
            break;
        }
    }
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", acount, ecount, icount, ocount, ucount);
    printVowel(acount, ecount, icount, ocount, ucount);
    system("pause");
    return 0;
}

void printVowel(int acount, int ecount, int icount, int ocount, int ucount)
{
    printf("a|");
    printStar(acount);
    printf("\n");

    printf("e|");
    printStar(ecount);
    printf("\n");

    printf("i|");
    printStar(icount);
    printf("\n");

    printf("o|");
    printStar(ocount);
    printf("\n");

    printf("u|");
    printStar(ucount);
    printf("\n");

    printf(" +----|----|----|\n");
    printf(" 0    5    10    15\n");
}

void printStar(int count)
{
    for (int i = 0; i < count; i++)
        printf("*");
}
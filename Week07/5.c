//P249 12
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int inArray(char, char);

char kw[6][2] = {{'a', 't'}, {'i', 's'}, {'h', 'e'}, {'w', 'e'}, {'u', 'p'}, {'o', 'n'}};

int main()
{
    int i = 0, r = 0, temp = 0;
    srand(time(NULL));

    do
    {
        temp = r;
        r = rand() % 26 + 1;
        printf("%c", r + 96);
        i++;
        //Sleep(200);
    } while (inArray((char)(temp + 96), (char)(r + 96)) == 0);

    printf("\n");
    printf("total:%d\n", i);

    system("pause");
    return 0;
}

int inArray(char c1, char c2)
{
    for (int j = 0; j < 6; j++)
    {
        if (c1 == kw[j][0] && c2 == kw[j][1])
            return 1;
        else
            continue;
    }

    return 0;
}
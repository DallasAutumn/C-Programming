//P205 3
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 20

int main()
{
    int res[MAXLEN];
    int num, q, r, top = -1;
    printf("Plz enter a positive integer:\n");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Error!\n");
        return -1;
    }
    else
    {
        do
        {
            r = num % 10;
            printf("This step got %d\n", r);
            num = (int)(num / 10);
            res[++top] = r;
        } while (!(r == 0 && num == 0));
    }

    for (int i = 0; i < top; i++)
    {
        if (res[i] != 0)
            printf("%d", res[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
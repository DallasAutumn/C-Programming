//P156:Q6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int S[3];
    int top = -1;
    int sum = 0;

    do
    {
        printf("Plz enter card%d number:\n", i + 1);
        char card = getchar();

        if (card == 'J' || card == 'Q' || card == 'K')
            S[++top] = 10;
        else if (card == 'A')
        {
            while (top >= 0)
                sum = sum + S[top--];
            if (sum >= 21)
                S[++top] = 1;
            else
                S[++top] = 11;
        }
        else if (2 <= (int)card - 48 <= 10)
            S[++top] = (int)card - 48;
        else
        {
            printf("Input Error!");
            return -1;
        }
        i++;
    } while (i < 3);
    while (top >= 0)
        sum = sum + S[top--];
    printf("The point is %d\n", sum);

    system("pause");
    return 0;
}
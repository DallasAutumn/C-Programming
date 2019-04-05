//P145:Q1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Plz enter your score:\n");
    scanf("%d", &score);

    if (score == 100)
        printf("A\n");
    else
    {
        switch ((int)(score / 10))
        {
        case 9:
        {
            printf("A\n");
            break;
        }
        case 8:
        {
            printf("B\n");
            break;
        }
        case 7:
        {
            printf("C\n");
            break;
        }
        case 6:
        {
            printf("D\n");
            break;
        }
        default:
        {
            printf("F\n");
            break;
        }
        }
    }
    system("pause");
    return 0;
}
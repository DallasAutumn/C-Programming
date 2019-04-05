//P152:Q1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code;
    printf("Plz enter the code of the driver: \n");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
    {
        printf("3M Inc.\n");
        break;
    }
    case 2:
    {
        printf("WanSheng Inc.\n");
        break;
    }
    case 3:
    {
        printf("Sony\n");
        break;
    }
    case 4:
    {
        printf("Weibao Inc.\n");
        break;
    }

    default:
    {
        printf("Err\n");
        break;
    }
    }

    system("pause");
    return 0;
}
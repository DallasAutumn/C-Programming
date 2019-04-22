//P68 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transDigit(int);
char trans[50];

int main(void)
{
    int digit1, digit2;

    while (1)
    {
        printf("Enter a two-digit number: ");
        scanf("%1d%1d", &digit1, &digit2);

        switch (digit1)
        {
        case 1:
        {
            switch (digit2)
            {
            case 0:
            {
                strcpy(trans, "ten");
                break;
            }
            case 1:
            {
                strcpy(trans, "eleven");
                break;
            }
            case 2:
            {
                strcpy(trans, "twelve");
                break;
            }
            case 3:
            {
                strcpy(trans, "thirteen");
                break;
            }
            case 4:
            {
                strcpy(trans, "fourteen");
                break;
            }
            case 5:
            {
                strcpy(trans, "fifteen");
                break;
            }
            case 6:
            {
                strcpy(trans, "sixteen");
                break;
            }
            case 7:
            {
                strcpy(trans, "seventeen");
                break;
            }
            case 8:
            {
                strcpy(trans, "eighteen");
            }
            case 9:
            {
                strcpy(trans, "nineteen");
                break;
            }
            default:
                break;
            }
            break;
        }
        case 2:
        {
            strcpy(trans, "twenty");
            transDigit(digit2);
            break;
        }
        case 3:
        {
            strcpy(trans, "thirty");
            transDigit(digit2);
            break;
        }
        case 4:
        {
            strcpy(trans, "forty");
            transDigit(digit2);
            break;
        }
        case 5:
        {
            strcpy(trans, "fifty");
            transDigit(digit2);
            break;
        }
        case 6:
        {
            strcpy(trans, "sixty");
            transDigit(digit2);
            break;
        }
        case 7:
        {
            strcpy(trans, "seventy");
            transDigit(digit2);
            break;
        }
        case 8:
        {
            strcpy(trans, "eighty");
            transDigit(digit2);
            break;
        }
        case 9:
        {
            strcpy(trans, "ninety");
            transDigit(digit2);
            break;
        }
        default:
            break;
        }

        printf("You entered the number %s\n", trans);
    }

    system("pause");
    return 0;
}

void transDigit(int digit)
{
    switch (digit)
    {
    case 0:
        break;
    case 1:
    {
        strcat(trans, "-one");
        break;
    }
    case 2:
    {
        strcat(trans, "-two");
        break;
    }
    case 3:
    {
        strcat(trans, "-three");
        break;
    }
    case 4:
    {
        strcat(trans, "-four");
        break;
    }
    case 5:
    {
        strcat(trans, "-five");
        break;
    }
    case 6:
    {
        strcat(trans, "-six");
    }
    case 7:
    {
        strcat(trans, "-seven");
        break;
    }
    case 8:
    {
        strcat(trans, "-eight");
        break;
    }
    case 9:
    {
        strcat(trans, "-nine");
    }
    default:
        break;
    }
}
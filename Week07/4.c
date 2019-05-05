//P248 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void HILO();
void Retry();

int onGame = 1;

int main()
{

    do
    {
        HILO();
    } while (onGame);

    system("pause");
    return 0;
}

void HILO()
{
    int a, guess, flag = 0;

    srand(time(NULL));
    a = rand() % 100 + 1; //Initialize a random integer between 1 and 100
    printf("a = %d\n", a);

    for (int i = 7; i >= 1; i--)
    {
        printf("You have %d chances\n", i);
        scanf("%d", &guess);
        if (guess == a)
        {
            flag = 1;
            break;
        }
        if (guess > a)
        {
            printf("Wrong Number, Try Again, %d Chances Left :)\n", i - 1);
            printf("Note:Greater\n");
        }
        if (guess < a)
        {
            printf("Wrong Number, Try Again, %d Chances Left :)\n", i - 1);
            printf("Note:Smaller\n");
        }
    }
    if (flag)
        printf("Hooray, you have won!\n");
    else
        printf("Sorry, you lose. The correct answer is %d\n", a);

    Retry();
}

void Retry()
{
    char retry;

    printf("Would you like to play again (y/n)?\n");
    rewind(stdin);
    scanf("%c", &retry);

    if (retry == 'y')
        HILO();
    else if (retry == 'n')
    {
        printf("Exited.\n");
        onGame = 0;
    }
    else
    {
        printf("Read what I say! :(\n");
        Retry();
    }
}
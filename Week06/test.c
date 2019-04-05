#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

int main()
{
    printf("plz input couter...");
    int counter;
    scanf("%d", &counter);

    if (counter < 0)
    {
        printf("Error input\n");
        return -1;
    }

    int i;
    for (i = counter; i > 0; i--)
    {
        printf("%d", i);
        system("cls");
        sleep(1);
    }
    printf("\a");
}
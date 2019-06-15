//P391 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("1.txt", "r");
    char line[100];
    const char sep[] = ",";

    for (int i = 0; i < 4; i++)
    {
        fgets(line, sizeof(line), fp);
        printf("Name: %s\n", strtok(line, sep));
        printf("Address: %s\n", strtok(NULL, sep));
        printf("City, State: %s\n", strtok(NULL, "\n"));
        printf("\n");
    }

    system("pause");
    return fclose(fp);
}
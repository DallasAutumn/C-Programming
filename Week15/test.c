#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char line[20];
    fp = fopen("7.txt", "r");
    while (!feof(fp))
    {
        fgets(line, sizeof(line), fp);
        puts(line);
    }
    system("pause");
    return 0;
}

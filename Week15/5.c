//reverse text
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *inFile, *outFile;
    char oriTxt[100], revTxt[100], ch;
    long offset = 0;

    inFile = fopen("5.txt", "r");
    fgets(oriTxt, sizeof(oriTxt), inFile);
    puts(oriTxt);

    for (int i = strlen(oriTxt) - 1; i >= 0; i--)
        revTxt[strlen(oriTxt) - 1 - i] = oriTxt[i];
    puts(revTxt);
    outFile = fopen("rev.txt", "w");
    fputs(revTxt, outFile);

    fclose(inFile);
    fclose(outFile);

    system("pause");
    return 0;
}
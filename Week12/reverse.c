//《现代方法》p223,4
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i >= 1; i--)
        printf("%s ", argv[i]);

    system("pause");
    return 0;
}
//P139 Q4
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char status;
    printf("Plz enter the job status:\n");
    status = getchar();

    if (status == 's')
        printf("$800 per week\n");
    else
        printf("$375 per week\n");

    system("pause");
    return 0;
}
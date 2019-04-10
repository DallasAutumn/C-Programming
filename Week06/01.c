//P183 Q2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, MAXCOUNT;
    float num, total;

    printf("Please type in the total number of data values to be added:\n\n");
    scanf("%d", &MAXCOUNT);

    count = 1;
    total = 0.0;

    while (count <= MAXCOUNT)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        printf("The total is now %f\n", total);
        count++;
    }

    printf("\n\nThe final total of the %d numbers is %f\n", MAXCOUNT, total);

    system("pause");
    return 0;
}
//Find max and min
#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

int main()
{
    float nums[MAXLEN];
    int i = 0;
    float num, max, min;

    do
    {
        printf("Plz enter a number:\n");
        scanf("%f", &num);
        if (num > 0)
        {
            nums[i] = num;
            i++;
        }
    } while (num > 0);

    if (nums != NULL)
    {
        max = nums[0], min = nums[0];
    }
    else
    {
        printf("Empty!\n");
        return -1;
    }

    for (int j = 0; j < i; j++)
    {
        double temp = nums[j];
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }

    printf("max = %f, min=%f\n", max, min);

    system("pause");
    return 0;
}
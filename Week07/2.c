//num_digits(n,k)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXDIGITS 100

int num_digits(int num, int k);

int main()
{
    int n = 12345, k = 2;
    printf("n=%d, k=%d, digit=%c\n", n, k, num_digits(n, k));
    system("pause");
    return 0;
}

int num_digits(int n, int k)
{
    char arr[MAXDIGITS];
    if (k <= n)
    {
        itoa(n, arr, 10);
        int len = strlen(arr);
        return arr[len - k];
    }
    else
        return -1;
}
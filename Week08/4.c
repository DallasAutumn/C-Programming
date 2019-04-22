//Solve the equation: xyz+yzz=532
#include <stdio.h>
#include <stdlib.h>

void solve(void);

int main(void)
{
    solve();
    system("pause");
    return 0;
}

void solve(void)
{
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            for (int z = 0; z < 10; z++)
            {
                if (100 * x + 110 * y + 12 * z == 532)
                    printf("x = %d, y=%d, z=%d\n", x, y, z);
            }
        }
    }
}
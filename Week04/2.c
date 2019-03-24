//P115 Q4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    for (int i = 0; i < 3; i++)
    {
        printf("Input x1,y1,x2,y2 with spaces seperated: \n");
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("x1=%d, y1=%d, x2=%d, y2=%d \n", x1, y1, x2, y2);
        printf("The middle point is (%d,%d)\n", (x1 + x2) / 2, (y1 + y2) / 2);
    }

    system("pause");
    return 0;
}
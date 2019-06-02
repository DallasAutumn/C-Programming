//《现代方法》p126,9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 10

void move(int *i, int *j, int flag, int count, char mat[M][M]);
int check(int i, int j, int flag, char mat[M][M]);
int checkAll(int i, int j, int flag, char mat[M][M]);
void printMat(char mat[M][M]);

int main()
{
    char mat[M][M];
    int i = 0, j = 0, count = 0, flag = 0;

    for (int x = 0; x < M; x++)
        for (int y = 0; y < M; y++)
            mat[x][y] = '.';
    mat[0][0] = 'A';

    do
    {
        do
        {
            flag = rand() % 4;
        } while (!check(i, j, flag, mat));

        count++;
        move(&i, &j, flag, count, mat);
    } while (checkAll(i, j, flag, mat) && count < 25);

    printMat(mat);
    system("pause");
    return 0;
}

void move(int *i, int *j, int flag, int count, char mat[M][M])
{
    switch (flag)
    {
    case 0:
    {
        *i = *i - 1;
        mat[*i][*j] = 'A' + count;
        break;
    }
    case 1:
    {
        *i = *i + 1;
        mat[*i][*j] = 'A' + count;
        break;
    }
    case 2:
    {
        *j = *j - 1;
        mat[*i][*j] = 'A' + count;
        break;
    }
    case 3:
    {
        *j = *j + 1;
        mat[*i][*j] = 'A' + count;
        break;
    }
    default:
        break;
    }
}

int check(int i, int j, int flag, char mat[M][M])
{
    switch (flag)
    {
    case 0:
    {
        if (i - 1 >= 0 && mat[i - 1][j] == '.')
            return 1;
        else
            return 0;
    }
    case 1:
    {
        if (i + 1 <= M && mat[i + 1][j] == '.')
            return 1;
        else
            return 0;
    }
    case 2:
    {
        if (j - 1 >= 0 && mat[i][j - 1] == '.')
            return 1;
        else
            return 0;
    }
    case 3:
    {
        if (j + 1 <= M && mat[i][j + 1] == '.')
            return 1;
        else
            return 0;
    }
    default:
        return 0;
    }
}

int checkAll(int i, int j, int flag, char mat[M][M])
{
    for (int flag = 0; flag < 4; flag++)
    {
        if (check(i, j, flag, mat) != 0)
            return 1;
    }

    return 0;
}

void printMat(char mat[M][M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%c  ", mat[i][j]);
        }
        printf("\n");
    }
}
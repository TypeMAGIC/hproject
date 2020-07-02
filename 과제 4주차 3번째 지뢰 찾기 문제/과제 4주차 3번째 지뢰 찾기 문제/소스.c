[도언][오후 9:01] #include <stdio.h>

int main()
{
    int num = 0;
    int bomb[11][11] = { 0, };
    int x = 0;
    int y = 0;




    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            scanf_s(" %d", &bomb[i][j]);
        }
    }

    scanf_s("%d %d", &y, &x);

    if ((1 <= x) &&
        (x <= 9) &&
        (1 <= y) &&
        (y <= 9))
    {
        if (bomb[y][x] == 1)
        {
            printf("-1");
        }
        else
        {
            for (int i = 1; i > -2; i--)
                ...
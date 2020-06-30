#include <stdio.h>



void myswap(int* x, int* y)
{
    if (*x < *y)
    {
    }
    else
    {
        int c = *x;
        *x = *y;
        *y = c;
    }
}



main()
{
    int a, b;
    scanf_s("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
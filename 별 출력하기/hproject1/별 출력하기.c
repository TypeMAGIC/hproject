#include <stdio.h>

void main()
{
	int i = 0;
	int n = 0;
	int l = 0;
	int x = 1;
	int j = 0;
	scanf_s("%d", &n);
	if (2 < n < 100 && n % 2 != 0)
	{
		for (i = 0; i < n / 2 + 1; i++)
		{
			if (i == 0) {

			}
			else {
				printf("\n");
			}
			
			for (j = 0; j < (n-x)/2; j++)
			{
				printf(" ");
			}

			for (l = 0; l < x; l++)
			{

				printf("*");
			}
			x += 2;
		}
	}
	else
	{
	}
}
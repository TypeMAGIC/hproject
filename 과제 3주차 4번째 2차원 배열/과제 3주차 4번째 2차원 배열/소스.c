#include <stdio.h>

int main()
{
	int n = 0;
	int x = 0;
	int y = 0;
	int z = 1;

	int num[100][100] = { 0 };
	
	scanf_s("%d", &n);

	for (x = 0; x < n; x++)
	{
		if (x % 2 == 0)
		{
			for (y = 0; y < n; y++)
			{
				num[y][x] = z;
				z += 1;
			}
		}
		else
		{
			for (y = n-1; y >= 0; y--)
			{
				num[y][x] = z;
				z += 1;
			}
		}
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d ", num[y][x]);
		}
		printf("\n");
	}

	return 0;
}
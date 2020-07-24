#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100000

int plus(int k, int arr[SIZE])
{
	int n = 0;
	while (k >= 0)
	{
		n += arr[k];
		k--;
	}
	return n;
}

int comp(int i, int arr[SIZE])
{
	while (arr[i] == 0)
	{
		i--;
	}
	return i;
}

void for1(int k, int arr[SIZE])
{
	for (int i = 0; i < k; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0)
		{
			arr[comp(i - 1, arr)] = 0;
		}
	}
}

int main()
{
	int k = 0;
	int* arr = (int*)malloc(sizeof(int) * SIZE+1);
	memset(arr, 0, SIZE);
	scanf_s("%d", &k);

	if (1 <= k && k <= SIZE)
	{
		for1(k, arr);
	}

	printf("%d", plus(k, arr));

	return 0;
}
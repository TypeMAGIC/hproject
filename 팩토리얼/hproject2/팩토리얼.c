#include <stdio.h>

int n = 0;

long long f(n)
{
	int j = 1;
	int i = 0;
	for (i = n; i > 0; i--)
	{
		j *= i;
	}
	return j;
}

int main()
{
	scanf_s("%d", &n);
	printf("%lld\n", f(n));
}
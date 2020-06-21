#include <stdio.h>

int a = 0; //1번째 수
int b = 1; //2번째 수
int c = 0; //결과 저장

int Fib(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else if (x == 0)
	{
		return 0;
	}
	else
	{
		c = a + b;
		a = b;
		b = c;
		return Fib(x-1)+Fib(x-2);
	}
}

int main()
{
	int num = 0;

	scanf_s("%d", &num);
	if (0 <= num && num <= 20)
	{
		printf("%d", Fib(num));
	}
	return 0;
}
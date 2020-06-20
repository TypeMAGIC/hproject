#include <stdio.h>

int count = 0;
int num1 = 0;
int num2 = 0;

int plus(int num) // num2
{	
	if (count == 0)
	{
		num1 = num;
	}else{}
	if (count == num)
	{
		return num1;
	}
	else
	{
		num1 += count;
		count += 1;
		plus(num);
	}
}

void main()
{
	int a = 0;
	scanf_s("%d", &num2);
	if (1 <= num2 <= 10000)
	{
		a = plus(num2);
		printf("%d", a);
	}
	else
	{
	}
}
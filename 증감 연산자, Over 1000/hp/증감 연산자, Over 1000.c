#include <stdio.h>

int main()
{
	//증감 연산자
	int num1 = 5;
	int num2 = 3;
	int num3;
	int num4;

	num1++; //num1 == 5
	num3 = --num1; // num1 == 5, num3 == 5

	--num2; //num2 == 2
	num4 = num2++; //num2 == 2, num4 == 2
	//num2 == 3
	printf("%d\n", num3); //num3 == 5
	printf("%d\n", num4); //num4 == 2
	


	//Over 1000
	int a = 0;
	int b = 0;

	while (1)
	{
		b++;
		a += b;
		if (a >= 1000)
		{
			break;
		}
	}

	printf("%d", b);

	return 0;





}
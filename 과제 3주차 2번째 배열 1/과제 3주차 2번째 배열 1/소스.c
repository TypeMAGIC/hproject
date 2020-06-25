#include <stdio.h>

int Check_Condition(int x)
{
	if (100 <= x < 1000)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i = 0;
	int j = 0;
	int result = 0;
	int digit = 0;
	int minus_num = 0;
	int minus_result = 0;

	int arr[10] = { 0 };
	int num[3] = { 0 };
	int result_arr[100] = { 0 };
	int arr_num[10] = { 0 };
	int end_result[10] = { 0 };

	printf("100 이상, 1000 미만의 수를 3개 입력하세요.\n\n");
	printf("첫 번째 숫자 입력(100 ~ 999) = ");
	scanf_s("%d", &num[0]);
	printf("두 번째 숫자 입력(100 ~ 999) = ");
	scanf_s("%d", &num[1]);
	printf("세 번째 숫자 입력(100 ~ 999) = ");
	scanf_s("%d", &num[2]);


	for (i = 0; i < 3; i++)
	{
		j = Check_Condition(num[i]);
		if (j == 0)
		{
			break; 
		}
		else{}
	}

	result = num[0] * num[1] * num[2];
	printf("\n\n곱한 결과 = %d\n\n", result);

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			arr[0] = 1;
		}
		else
		{
			arr[i] = arr[i-1] * 10;

			if (result / arr[i] == 0)
			{
				digit = i - 1;
				break;
			}
		}
	}

	for (i = 0; i < digit; i++)
	{
			result_arr[i] = result / arr[digit-i];
			minus_num = result_arr[i] * arr[digit-i];
			minus_result = result - minus_num;
			result = minus_result;
	}

	/*result_arr[0] = result / arr[digit]; //3
	minus_num = result_arr[0] * arr[digit]; //300
	minus_result = result - minus_num; //21
															참고용
	result_arr[1] = minus_result / arr[digit-1]; //2
	minus_num = result_arr[1] * arr[digit - 1]; //20
	minus_result = minus_result - minus_num; //1
	*/

	result_arr[i] = minus_result / arr[digit - i];
	
	for (i = 0; i < 10; i++)
	{
		arr_num[i] = i;
	}

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < digit + 1; i++)
		{
			{
				if (result_arr[i] == arr_num[j])
				{
					end_result[j] += 1;
				}
			}
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%d의 개수 = %d\n", i, end_result[i]);
	}

	return 0;
}
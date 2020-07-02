#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;

	int score[100] = { 0, };
	int grade[100] = { 0, };
	char students[100][20] = { " ", };

	//printf("입력할 학생 수는 몇 명인가요? \n");	보여주기 프린트
	scanf_s("%d", &n);
	

	if (3 <= n && n <= 50)
	{
		for (i = 0; i < n; i++)
		{
			scanf_s("%s", students[i], sizeof(students[i]));
			scanf_s("%d", &score[i]);
		}
	}

	for (i = 0; i < n; i++)
	{
		grade[i] = 1;
		
		for (j = 0; j < n; j++)
		{
			if (score[i] < score[j])
			{
				grade[i] += 1;
			}
			else{ }
		}
		
	}
	
	/*for (i = 0; i < n; i++)
	{
		printf("\n%s %d %d", students[i], score[i], grade[i]);		학생 이름, 점수, 등수 출력
	}*/

	for (i = 0; i < n; i++)
	{
		if (grade[i] == 3)
		{
			printf("%s", students[i]);
		}
	}
	

	return 0;
}
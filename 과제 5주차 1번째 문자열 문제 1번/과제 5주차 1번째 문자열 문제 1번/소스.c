#include <stdio.h>
#include <string.h>

int main()
{

	int i = 0;
	int char2[26];
	int char1[26];

	char charator[2][1001] = { "" };

	for (i = 0; i < 26; i++)
	{
		char1[i] = i + 65;
		char2[i] = i + 97;
	}

	scanf_s("%s", charator, sizeof(charator));

	comp(charator, char1, char2);

	printf("%s", charator);

	return 0;
}

int comp(char (*char_array)[1001], int cha1[26], int cha2[26])
{
	int i = 0;
	int j = 0;
	int num = 0;

	for (i = 0; i < strlen(char_array); i++)
	{
		for (j = 0; j < 26; j++)
		{
			num = char_array[0][i];

			if (num == cha1[j])
			{
				char_array[0][i] = cha2[j];
			}
			else if (num == cha2[j])
			{
				char_array[0][i] = cha1[j];
			}
			else {}
		}
	}
	return 0;
}
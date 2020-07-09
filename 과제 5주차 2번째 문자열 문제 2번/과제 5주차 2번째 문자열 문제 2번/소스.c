#include <stdio.h>
#include <string.h>

int main()
{
	char password[2][21] = { "" };
	int pass1[21];
	int pass2[21];

	scanf_s("%s", password, sizeof(password));

	for (int i = 0; i < 21; i++)
	{
		if (password[0][i] != '\0')
		{
			pass1[i] = password[0][i] + 2;
			pass2[i] = (password[0][i] * 7) % 80 + 48;
		}else{}
	}

	for (int i = 0; i < strlen(password); i++)
	{
		printf("%c", pass1[i]);
	}

	printf("\n");

	for (int i = 0; i < strlen(password); i++)
	{
		printf("%c", pass2[i]);
	}

	return 0;
}
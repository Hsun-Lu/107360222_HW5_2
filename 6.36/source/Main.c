#include <stdio.h>
#include <stdlib.h>

void stringReverse(char string[]);

int main(void)
{
	char string[50];

	printf("�п�J�r��G");
	scanf_s("%s", &string, 50);

	stringReverse(string);

	system("pause");
	return 0;
}

void stringReverse(char string[])
{
	int i = 0;
	int j = 0;

	do
	{
		i++;

	} while (string[i] != '\0');

	printf("  �r��ϦV�G");

	for (j = i-1; j >= 0; j--)
		printf("%c", string[j]);

	printf("\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Rollthedice1(int a[36000]);
void Rollthedice2(int b[36000]);
void Result(int a[36000], int b[36000]);

int main(void)
{
	int *a[36000] = { 0 };
	int *b[36000] = { 0 };
	int count[6] = { 0 };

	srand(time(0));

	Rollthedice1(a);
	Rollthedice2(b);

	Result(a, b);

	system("pause");
	return 0;
}

void Rollthedice1(int a[36000])
{
	int dice, count;

	for (count = 0; count < 36000; count++)
	{
		do
		{

			dice = rand() % 6;

		} while (a[count] != 0);
		a[count] = dice + 1;
	}
}

void Rollthedice2(int b[36000])
{
	int dice, count;

	for (count = 0; count < 36000; count++)
	{
		do
		{

			dice = rand() % 6;

		} while (b[count] != 0);
		b[count] = dice + 1;
	}
}

void Result(int a[36000], int b[36000])
{
	int i, sum;
	int count[11] = { 0 };

	for (i = 0; i < 36000; i++)
	{
		sum = a[i] + b[i];
		if (sum == 2) count[0] += 1;
		if (sum == 3) count[1] += 1;
		if (sum == 4) count[2] += 1;
		if (sum == 5) count[3] += 1;
		if (sum == 6) count[4] += 1;
		if (sum == 7) count[5] += 1;
		if (sum == 8) count[6] += 1;
		if (sum == 9) count[7] += 1;
		if (sum == 10) count[8] += 1;
		if (sum == 11) count[9] += 1;
		if (sum == 12) count[10] += 1;
	}

	printf("�I�ƩM�G�`����\n"
		   "     2�G%d\n"
		   "     3�G%d\n"
		   "     4�G%d\n"
		   "     5�G%d\n"
		   "     6�G%d\n"
		   "     7�G%d\n"
		   "     8�G%d\n"
		   "     9�G%d\n"
		   "    10�G%d\n"
		   "    11�G%d\n"
		   "    12�G%d\n", count[0], count[1], count[2], count[3], count[4], count[5], count[6], count[7], count[8], count[9], count[10]);
}
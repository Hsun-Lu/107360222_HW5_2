#include <stdio.h>
#include <stdlib.h>

void Findmaximum(int array[]);

int main(void)
{
	int array[50];
	int i, j;

	for (i = 0; i < 50; i++)
	{
		printf("請輸入數字：");
		scanf_s("%d", &array[i], 50);

		printf("按 1 以繼續輸入；按 0 以結束\n");
		scanf_s("%d", &j);
		if (j == 1) continue;
		else if (j == 0) break;

		printf("\n");
	}


	Findmaximum(array);

	system("pause");
	return 0;
}

void Findmaximum(int array[])
{
	int maximum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (array[i] > maximum) maximum = array[i];
		else maximum = maximum;
	}

	printf("最大數為 %d\n", maximum);
}
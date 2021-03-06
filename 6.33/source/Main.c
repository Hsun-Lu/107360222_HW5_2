#include <stdio.h>
#include <stdlib.h>

void Binarysearch(int i);

int main(void)
{
	int i;
	printf("輸入一個介於 0 至 20 的數字：");
	scanf_s("%d", &i);

	if ((i >= 0) && (i <= 20))  Binarysearch(i);
	else printf("此數超出範圍\n");

	system("pause");
	return 0;
}

void Binarysearch(int i)
{
	int array[11] = { 0,2,4,6,8,10,12,14,16,18,20 };
	int hi = 10;
	int low = 0;
	int mid;

	do
	{
		if ((i < array[hi]) && (i > array[low]))
		{
			mid = (hi + low)/2;
			if (i > array[mid]) low = mid + 1;
			if (i < array[mid]) hi = mid - 1;
		}

		if (i == array[hi])  mid = hi;

		if (i == array[low])  mid = low;

		else break;

	} while (array[mid] != i);

	if (array[mid] == i)  printf("此數於 array[%d]\n", mid);
	if (array[mid] != i)  printf("此數無法找到\n");
}
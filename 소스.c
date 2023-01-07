/*
#pragma warning(disable : 4996)
#include <stdio.h>

int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}
int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}
	return 0;
}
*/


#pragma warning(disable : 4996)
#include <stdio.h>

void recursive(int num)
{
	if (num <= 0)
		return;
	printf("recursive call! %d \n", num);
	recursive(num - 1);
}

int main(void)
{
	recursive(3);
	return 0;
}
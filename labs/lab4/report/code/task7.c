#include <stdio.h>

int main()
{
	int nums[3];
	int maxNum;

	printf("Введите 3 числа через пробел: ");
	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

	maxNum = nums[0];

	for (int i = 1; i <= 2; i++)
	{
		if (maxNum < nums[i]) maxNum = nums[i]; 
	}

	printf("%d \n", maxNum);
}
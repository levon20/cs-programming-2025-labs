#include <stdio.h>

int isSimple(int num)
{
	if (num <= 0) return 0;

	int cntOfDivides = 0;
	int	highestDivider = sqrt(num);
	for (int j = 1; j <= highestDivider; j += 2)
	{
		if (num % j == 0) ++cntOfDivides;
		if (cntOfDivides > 1) return 0;
	}	
	return 1;
}

void task3(int low, int high)
{
	int cntSimpleNums = 0;

	if (low > high)
	{
		printf("Error! lowValue > highValue! \n");
		return;
	}
	else if (low <= 0)
	{
		printf("Error! lowValue <= 0! \n");
		return;
	}

	if (low <= 3)
	{
		for (int i = 1; i <= 3; i++)
		{
			printf("%d ", i);
			cntSimpleNums++;
		}
		low = 5;
	}

	if ((low & 1) == 0) low += 1;

	for (int i = low; i <= high; i += 2)
	{
		if (isSimple(i))
		{
			printf("%d ", i);
			cntSimpleNums++;
		}
	}
		if (cntSimpleNums == 0) printf("No simple nums! \n");
		printf("\n");
}
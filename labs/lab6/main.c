#include <stdio.h>
#include <math.h>

float task1(float, char, char);
float task2(float, int);
void task3(int, int);

int main(void)
{
	int low = 1;
	int high = 1;
	while (1)
	{
		scanf("%d %d", &low, &high);
		task3(low, high);
	}
}

float task1(float time, char unit1, char unit2)
{
	const int minutsInHour = 60;
	const int secondsInMinute = 60;
	const int secondsInHour = 3600;

	if (time <= 0) return 0;

	if (unit1 == 's')
	{
		if (unit2 == 'm') return (time / secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'm')
	{
		if (unit2 == 's') return (time * secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'h')
	{
		if (unit2 == 's') return (time * secondsInHour);
		else if (unit2 == 'm') return (time / minutsInHour);
	}
	return 0;
}

float Pow(float num, int power)
{
	float result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= num;
	}
	return	result;
}

float calculateFinalSum(float sum, float rate, int years)
{
	return (sum * Pow(1 + rate, years));
}

float task2(float startSum, int years)
{
	if (startSum <= 0) return 0;
	else if (years <= 0) return 0;

	float sum = startSum;
	float rate = 0;
	float bonusRate = 0;
	float firstRate = 0.03f; // первые 3 года
	float secondRate = 0.05f; // последующие 2 года
	float thirdRate = 0.02f; // начиная с 6-ого года
	float maxBonusRate = 0.05f; //Максимальный бонусный коэффициент

	bonusRate = (int)startSum / 10000 * 0.003f;
	if (bonusRate > maxBonusRate) bonusRate = maxBonusRate;

	if (years - 3 <= 0) return calculateFinalSum(sum, firstRate + bonusRate, years) - startSum;
	else 
	{
		sum = calculateFinalSum(sum, firstRate + bonusRate, 3);
		years -= 3;
	}
	if (years - 3 <= 0)
	{
		return calculateFinalSum(sum, secondRate + bonusRate, years) - startSum;
	}
	else 
	{
		sum = calculateFinalSum(sum, secondRate + bonusRate, 3);
		years -= 3;
	}
	return calculateFinalSum(sum ,thirdRate + bonusRate, years) - startSum;
}

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





















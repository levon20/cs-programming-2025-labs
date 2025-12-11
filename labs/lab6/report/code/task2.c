#include <stdio.h>
#include <math.h>

float calculateFinalSum(float sum, float rate, int years)
{
	return (sum * pow(1 + rate, years));
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
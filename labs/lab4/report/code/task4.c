#include <stdio.h>

int getSumDigitsOfNum(int num)
{
	int res = 0;
	while (num > 0)
	{
		res += num%10;
		num /= 10;
	}
	return res;
}

int main()
{
	int num;

	printf("Введите число: ");
	scanf("%d", &num);

	if (!(num & 1))
	{
		if (getSumDigitsOfNum(num) % 3 == 0) printf("Число делится на 6. \n");
		else printf("Число не делится на 6. \n");	
	}
	else printf("Число не делится на 6. \n");
}
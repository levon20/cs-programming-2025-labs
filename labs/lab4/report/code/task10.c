#include <stdio.h>

int main()
{
	int num;
	int numOfDeviders = 0;

	printf("Введите число: ");
	scanf("%d", &num);

	printf("Число %d - ", num);

	if (num > 0)
	{
		if ((num & 1) || num == 2)
		{
			for (int i = 1; i <= num; i+= 2)
			{
				if (num % i == 0) ++numOfDeviders;
				if (numOfDeviders > 2)
				{
					printf("составное.\n");
					break;
				} 
			}	
			printf("простое.\n");	
		}
		else printf("составное.\n");	
	}
	else printf("Ошибка! Некорректное число. ");
}
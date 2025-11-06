#include <stdio.h>

int main()
{
	int hours;

	printf("Введите час [0;23]: ");
	scanf("%d", &hours);

	if (hours >= 0 && hours <= 23)
	{
		printf("Сейчас ");
		if (hours >= 0 && hours <= 5) printf("ночь.\n");
		else if (hours >= 6 && hours <= 11) printf("утро.\n");
		else if (hours >= 12 && hours <= 17) printf("день.\n");
		else printf("вечер.\n");
	}
	else printf("Ошибка. Некорректное время.");
}
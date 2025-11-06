#include <stdio.h>

int main()
{
	int year;

	printf("Введите год: ");
	scanf("%d", &year);

	if (year > 0)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("%d - високосный.\n", year);
		else printf("%d - не високосный\n", year);
	}
	else printf("Ошибка! Некорректный год.");
}
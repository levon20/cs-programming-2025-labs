#include <stdio.h>

int main()
{
	int monthNum;

	printf("Введите номер месяца: ");
	scanf("%d", &monthNum);

	if (monthNum >= 1 && monthNum <= 12)
	{
		printf("Это ");
		if (monthNum >= 3 && monthNum <= 5) printf("весна\n");
		else if (monthNum >= 6 && monthNum <= 8) printf("лето\n");
		else if (monthNum >= 9 && monthNum <= 11) printf("осень\n");
		else printf("зима\n");
	}
	else printf("Ошибка! Данные некорректны!");
}
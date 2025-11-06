#include <stdio.h>

int main()
{
	int dogAge;

	printf("Введите возраст собаки (в годах): ");
	scanf("%d", &dogAge);

	if (dogAge >= 1 && dogAge <= 22)
	{
		printf("Возраст собаки в человеческих годах: ");
		if (dogAge <= 2) printf("%.1f \n", dogAge*10.5f);
		else printf("%d \n", 21+(dogAge-2)*4); 
	}
	else printf("Ошибка ! Вы вышли за допустимый диапазон = [1;22] или ввели не число.\n");
}
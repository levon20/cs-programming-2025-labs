#include <stdio.h>

int main()
{
	float temperature;

	printf("Введите температуру: ");
	scanf("%f", &temperature);

	if (temperature >= 20) printf("Кондиционер выключен \n");
	else printf("Кондиционер включен \n");	
}
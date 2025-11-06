#include <stdio.h>

int main()
{
	int sum;
	float discount;

	printf("Введите сумму покупки: ");
	scanf("%d", &sum);

	if (sum > 0)
	{
		if (sum < 1000) discount = 0;
		else if (sum >= 1000 && sum < 5000) discount = 0.05f;
		else if (sum >= 5000 && sum < 10000) discount = 0.1f;
		else if (sum >= 10000) discount = 0.15f;


		printf("Скидка %.0f%% \n", discount*100);
		printf("Итоговая сумма к оплате: %.1f \n", sum - sum*discount);
	}
	else printf("Ошибка. Некорректная сумма.\n");
}
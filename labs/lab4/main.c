#include <stdio.h>

void tasc1(void);
void tasc2(void);
void tasc3(void);
void tasc4(void);
void tasc5(void);
void tasc6(void);
void tasc7(void);
void tasc8(void);
void tasc9(void);
void tasc10(void);
int getSumDigitsOfNum(int);
int getStrLength(char[]);

int main()
{
	tasc10();
}

void tasc1()
{
	float temperature;

	printf("Введите температуру: ");
	scanf("%f", &temperature);

	if (temperature >= 20) printf("Кондиционер выключен \n");
	else printf("Кондиционер включен \n");
} 	

void tasc2()
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

void tasc3()
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

void tasc4()
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

int getStrLength(char string[])
{
	int i = 0;
	while (string[i++] != '\0');
	return i;
}

void tasc5()
{
	char password[50];
	int literal;
	int i = 0;

	int haveUpCase = 0;
	int haveLowCase = 0;
	int haveNum = 0;
	int haveSpecLit = 0;

	printf("*Допустимые спец. символы: ! \" # $ %% & \' ) ( * +\n");

	printf("Придумайте пароль: ");
	scanf("%50s", password);

	if(getStrLength(password) >= 8)
	{
		while (password[i] != '\0')
		{	
			literal = (int)password[i++];
			if (literal >= 97 && literal <= 122) haveLowCase = 1;
			else if (literal >= 65 && literal <= 90) haveUpCase = 1;
			else if (literal >= 48 && literal <= 57) haveNum = 1;
			else if (literal >= 33 && literal <= 43) haveSpecLit = 1;
		}

		if(haveNum && haveUpCase && haveLowCase && haveSpecLit) printf("Пароль надежный.\n");
		else
		{
			printf("--------\n");
			printf("Пароль ненадежный. В нем нем:\n");
			if (!haveNum) printf("числа\n");
			if (!haveUpCase) printf("заглавной буквы латыни\n");
			if (!haveLowCase) printf("строчной буквы латыни\n");
			if (!haveSpecLit) printf("спецаильного сивола\n");
		}
	} 
	else printf("Пароль ненадежный в нем менее 8 символов.\n");
}

void tasc6()
{
	int year;

	printf("Введите год: ");
	scanf("%d", &year);

	if (year >= 0)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("%d - високосный.\n", year);
		else printf("%d - не високосный\n", year);
	}
	else printf("Ошибка! Некорректный год.");
}

void tasc7()
{
	int nums[3];
	int maxNum = -2147483648;

	printf("Введите 3 числа через пробел: ");
	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

	maxNum = nums[0];

	for (int i = 1; i <= 2; i++)
	{
		if (maxNum < nums[i]) maxNum = nums[i]; 
	}

	printf("%d \n", maxNum);
}

void tasc8()
{
	float sum;
	float discount;

	printf("Введите сумму покупки: ");
	scanf("%f", &sum);

	if (sum >= 0)
	{
		if (sum < 1000) discount = 0;
		else if (sum >= 1000 && sum < 5000) discount = 0.05f;
		else if (sum >= 5000 && sum < 10000) discount = 0.1f;
		else discount = 0.15f;


		printf("Скидка %.0f%% \n", discount*100);
		printf("Итоговая сумма к оплате: %.1f \n", sum - sum*discount);
	}
	else printf("Ошибка. Некорректная сумма.\n");
}

void tasc9()
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

void tasc10()
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
















#include <stdio.h>

void lab1(void);
void lab2(void);
void lab3(void);
void lab4(void);
void lab5(void);
void lab6(void);
void lab7(void);
void lab8(void);
void lab9(void);
void lab10(void);

int main()
{
	lab4();

}

void lab1()
{
	char name[10];
	int age;

	printf("Ваше имя: ");
	scanf("%10s", name);
	printf("Ваш возраст: ");
	scanf("%d", &age);	

	for(int i = 0; i <= 10; i++)
		printf("Вас зовут %s. Ваш возраст %d \n", name, age);	
}

void lab2()
{
	int num;
	printf("Введите число: ");
	scanf("%d", &num);
	for (int i = 0; i <= 9; i++)
	{
		printf("%d * %d = %d \n", num, i, num*i);
	}
}

void lab3()
{
	int iMin = 0;
	int iMax = 100;

	for(int i = iMin+2; i <= iMax; i+=3 )
	{
		printf("%d \n", i);
	}
}

void lab4()
{
	int num;
	long res = 1;
	printf("Введите число: ");
	scanf("%d", &num);
	for(int i = 1; i <= num; i++)
		res *= i;
	printf("%d! = %ld \n", num, res);
}

void lab5()
{
	int num = 20;
	while(num >= 0)
	{
		printf("%d \n", num--);
	}
}

void lab6()
{
	int num;
	int lastNum = 0;
	int preLastNum = 1;
	int boofer;
	printf("Введите число: ");
	scanf("%d", &num);
	do
	{
		printf("%d \n",lastNum);
		boofer = lastNum;
		lastNum += preLastNum;
		preLastNum = boofer;
	}
	while(lastNum <= num);
}

void lab7()
{
	int strSize = 50;
	int i = 0;
	char inpStr[strSize];

	printf("Введите до 50 символов: ");
	fgets(inpStr, strSize, stdin);

	while(inpStr[i] != '\0')
	{
		printf("%c", inpStr[i]);
		printf("%d", i++);
	}
		
}

void lab8()
{
	int num0;
	int num1;
	char isExit;
	int exit;
	printf("---------------------------- \n");
	printf("Завершить программу - Ctrl+C \n");
	printf("---------------------------- \n");
	while(!isExit)
	{
		printf("Введите 2 числа через пробел: ");
		scanf("%d %d",&num0,&num1);

		printf("Сумма чисел = ");
		printf("%d \n", num0+num1);
	}
}


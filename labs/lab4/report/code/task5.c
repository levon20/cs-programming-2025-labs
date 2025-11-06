#include <stdio.h>

int getStrLength(char string[])
{
	int i = 0;
	while (string[i++] != '\0');
	return i;
}

int main()
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
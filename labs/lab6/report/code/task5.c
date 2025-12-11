#include <stdio.h>

void printStr(char* str, int length)
{
	for (int i = 0; i < length; i++) printf("%c", str[i]);
	printf("\n");
}

int findEndStr(char* str, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] == '\0') return i-1;
	}
	return length-1;
}

void deleteAllSpacesInStr(char* str, int length, char* emptyStrRes)
{
	int cnt = 0;
	for(int i = 0; i < length; i++)
	{
		if (str[i] == ' ') continue;
		else if (str[i] == '\0') return;
		emptyStrRes[cnt++] = str[i];
	}
}

void task5(char* startStr, int length)
{
	char str[length];
	int indexOfEndStr;

	deleteAllSpacesInStr(startStr, length, str);
	indexOfEndStr = findEndStr(str, length);

	for (int i = 0; i <= indexOfEndStr/2; i++)
	{
		printf("%c %c \n", str[i], str[indexOfEndStr-i]);
		if (str[i] != str[indexOfEndStr-i]) 
		{
			printf("Слово - не палиндром. !p \n");
			return;
		}
	}
	printf("Слово - палиндром. p \n");
}
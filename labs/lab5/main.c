#include <stdio.h>

void task1(int*, int);
void task2(int*, int);
float task3(int*, int);

void printIntArray(int*, int);

int main()
{
	int arrayOfNums[5] = {1, 2, 3, 4, 5};

	task2(arrayOfNums, 5);

	printf("Измененный массив: ");
	printIntArray(arrayOfNums, 5);	
}

void task1(int *arrP, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arrP+i) == 3) *(arrP+i) = 30;
	}
}

void task2(int *arrP, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arrP+i) *= *(arrP+i);
	}
}

float task3(int *arrP, int size)
{
	int maxNum = *arrP;
	int num;

	for (int i = 0; i < size; i++)
	{
		if (*(arrP+i) > maxNum)
		{
			maxNum = *(arrP+i);
		}
	}

	return (maxNum/size);
}

void printIntArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(array+i));
	}
	printf("\n");
}





































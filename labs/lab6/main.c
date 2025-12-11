#include <stdio.h>
#include <math.h>

float task1(float, char, char);
float task2(float, int);
void task3(int, int);
void task4();
void task5(char*, int);

int main(void)
{
	char str[3] = "fdf";
	task5(str, 3);
}

float task1(float time, char unit1, char unit2)
{
	const int minutsInHour = 60;
	const int secondsInMinute = 60;
	const int secondsInHour = 3600;

	if (time <= 0) return 0;

	if (unit1 == 's')
	{
		if (unit2 == 'm') return (time / secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'm')
	{
		if (unit2 == 's') return (time * secondsInMinute);
		else if (unit2 == 'h') return (time / secondsInHour);
	}
	else if (unit1 == 'h')
	{
		if (unit2 == 's') return (time * secondsInHour);
		else if (unit2 == 'm') return (time / minutsInHour);
	}
	return 0;
}

////task2

float Pow(float num, int power)
{
	float result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= num;
	}
	return	result;
}

float calculateFinalSum(float sum, float rate, int years)
{
	return (sum * Pow(1 + rate, years));
}

float task2(float startSum, int years)
{
	if (startSum <= 0) return 0;
	else if (years <= 0) return 0;

	float sum = startSum;
	float rate = 0;
	float bonusRate = 0;
	float firstRate = 0.03f; // первые 3 года
	float secondRate = 0.05f; // последующие 2 года
	float thirdRate = 0.02f; // начиная с 6-ого года
	float maxBonusRate = 0.05f; //Максимальный бонусный коэффициент

	bonusRate = (int)startSum / 10000 * 0.003f;
	if (bonusRate > maxBonusRate) bonusRate = maxBonusRate;

	if (years - 3 <= 0) return calculateFinalSum(sum, firstRate + bonusRate, years) - startSum;
	else 
	{
		sum = calculateFinalSum(sum, firstRate + bonusRate, 3);
		years -= 3;
	}
	if (years - 3 <= 0)
	{
		return calculateFinalSum(sum, secondRate + bonusRate, years) - startSum;
	}
	else 
	{
		sum = calculateFinalSum(sum, secondRate + bonusRate, 3);
		years -= 3;
	}
	return calculateFinalSum(sum ,thirdRate + bonusRate, years) - startSum;
}

//////task3

int isSimple(int num)
{
	if (num <= 0) return 0;

	int cntOfDivides = 0;
	int	highestDivider = sqrt(num);
	for (int j = 1; j <= highestDivider; j += 2)
	{
		if (num % j == 0) ++cntOfDivides;
		if (cntOfDivides > 1) return 0;
	}	
	return 1;
}

void task3(int low, int high)
{
	int cntSimpleNums = 0;

	if (low > high)
	{
		printf("Error! lowValue > highValue! \n");
		return;
	}
	else if (low <= 0)
	{
		printf("Error! lowValue <= 0! \n");
		return;
	}

	if (low <= 3)
	{
		for (int i = 1; i <= 3; i++)
		{
			printf("%d ", i);
			cntSimpleNums++;
		}
		low = 5;
	}

	if ((low & 1) == 0) low += 1;

	for (int i = low; i <= high; i += 2)
	{
		if (isSimple(i))
		{
			printf("%d ", i);
			cntSimpleNums++;
		}
	}
		if (cntSimpleNums == 0) printf("No simple nums! \n");
		printf("\n");
}

////task4

void printMatrix(int* matrix, int numOfStr, int numOfCol)
{
	for (int i = 0; i < numOfStr; i++)
	{
		for (int j = 0; j < numOfCol; j++)
		{
			printf("%d ",matrix[i, j]);
		}
		printf("\n");
	}
}

void inputMatrixValues(int* matrix,int numOfStr, int numOfCol)
{
	for (int i = 0; i < numOfStr; i++)
	{
		printf("Введите элементы строки %d через пробел. Затем нажмите ENTER. \n", i+1);

		for(int j = 0; j < numOfCol; j++)
		{
			scanf("%d", &matrix[i, j]);
		}
	}
}

void task4()
{
	int numOfStr = 0;
	int numOfCol = 0;

	printf("Введите кол-во строк в матрицае: ");
	scanf("%d", &numOfStr);

	printf("Введите кол-во столбцов в матрицае: ");
	scanf("%d", &numOfCol);

	if (numOfCol <= 0 || numOfStr <= 0) printf("Error! numOfCol <= 0 or numOfStr <= 0!");

	int   matrix0[numOfStr][numOfCol];
	int   matrix1[numOfStr][numOfCol];
	int resMatrix[numOfStr][numOfCol];

	inputMatrixValues(*matrix0 ,numOfStr, numOfCol);
	inputMatrixValues(*matrix1 ,numOfStr, numOfCol);

	for (int i = 0; i < numOfStr; i++)
	{
		for (int j = 0; j < numOfCol; j++)
		{
			resMatrix[i][j] = matrix0[i][j] + matrix1[i][j];
		}
	}

	printMatrix(*resMatrix, numOfStr, numOfCol);
}

////task5

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
















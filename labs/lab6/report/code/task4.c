#include <stdio.h>

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
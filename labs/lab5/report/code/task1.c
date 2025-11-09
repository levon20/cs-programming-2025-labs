void task1(int *arrP, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arrP+i) == 3) *(arrP+i) = 30;
	}
}
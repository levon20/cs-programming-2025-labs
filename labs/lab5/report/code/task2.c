void task2(int *arrP, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arrP+i) *= *(arrP+i);
	}
}
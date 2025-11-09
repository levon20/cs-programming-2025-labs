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
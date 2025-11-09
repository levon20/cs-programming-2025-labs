def task4(tupl):
	size = len(tupl)

	for i in range (0, size):
		if (type(tupl[i]) != int):
			return tupl

	listOfNums = list(tupl)
	sortedListOfNums = sorted(listOfNums)

	return tuple(sortedListOfNums)
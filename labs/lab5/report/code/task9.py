def task9(ls):
	size = len(ls)
	dictionary ={}

	for i in range(0, size):
		word = ls[i].lower()
		firstLitWord = ls[i][0].lower()

		if (lit in dictionary):
			if (word not in dictionary[lit]):
				dictionary[lit].append(word)
		else:
			dictionary[lit] = [word]

	return dictionary
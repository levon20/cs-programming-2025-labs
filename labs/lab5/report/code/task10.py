def getMeanValue(lsNums):
	size = len(lsNums)
	res = 0
	for i in range(0, size):
		res += lsNums[i]

	return res/size	

def task10(ls):
	size = len(ls)
	dictionary = {}
	maxMeanMark = 0
	j = 0

	for i in range(0, size):
		name = ls[i][0]
		marks = ls[i][1]

		meanMark = getMeanValue(marks)
		dictionary[name] = meanMark

		if (meanMark > maxMeanMark):
			maxMeanMark = meanMark
			j = i

	return f"{ls[j][0]} имеет наивысший балл: {maxMeanMark:.2f}"
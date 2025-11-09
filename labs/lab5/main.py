import random

def task4(tupl):
	size = len(tupl)

	for i in range (0, size):
		if (type(tupl[i]) != int):
			return tupl

	listOfNums = list(tupl)
	sortedListOfNums = sorted(listOfNums)

	return tuple(sortedListOfNums)


def getIndexMin(ls):
	j = 0;
	minNum = ls[j]
	size = len(ls)
	for i in range (0, size):
		if (ls[i] < minNum):
			minNum = ls[i]
			j = i
	return j

def getIndexMax(ls):
	j = 0;
	maxNum = ls[j]
	size = len(ls)
	for i in range (0, size):
		if (ls[i] > maxNum):
			maxNum = ls[i]
			j = i
	return j

def task5(dictProducts):
	lsProducts = list(dictProducts.keys())
	lsCostProducts = list(dictProducts.values())

	iProductMinCost = getIndexMin(lsCostProducts)
	iProductMaxCost = getIndexMax(lsCostProducts)

	return {
	lsProducts[iProductMinCost] : lsCostProducts[iProductMinCost], 
	lsProducts[iProductMaxCost] : lsCostProducts[iProductMaxCost]
	}	


def task6(ls):
	size = len(ls)
	dictionary = {}

	for i in range(0, size):
		dictionary[ls[i]] = ls[i]

	return dictionary


def task7(dictEnRu, RuWord):
	lsEnWords = list(dictEnRu.keys())
	lsRusWords = list(dictEnRu.values())

	sizeLsRusWords = len(lsRusWords)

	for i in range(0, sizeLsRusWords):
		if (lsRusWords[i].lower() == RuWord.lower()):
			return lsEnWords[i]

	return None

def task8(playerMove):
	playerMove = playerMove.lower()
	moves = ("камень", "ножницы", "бумага", "ящерица", "спок")
	programMove = random.randint(0, 4);
	dictPlayRules = {
	"камень": ["ножницы", "ящерица"],
	"ножницы": ["бумага", "ящерица"],
	"бумага": ["камень", "спок"],
	"ящерица": ["бумага", "спок"],
	"спок": ["камень", "ножницы"]
	}

	if (playerMove in moves):
		if (programMove == playerMove):
			return "Ничья"
		elif (moves[programMove] in dictPlayRules[playerMove]):
			return "Вы выиграли !"
		else:
			return "Вы приграли !"
	else:	    
		return "Command not found"


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

























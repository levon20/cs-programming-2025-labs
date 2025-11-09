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

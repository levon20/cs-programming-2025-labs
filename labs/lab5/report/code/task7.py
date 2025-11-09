def task7(dictEnRu, RuWord):
	lsEnWords = list(dictEnRu.keys())
	lsRusWords = list(dictEnRu.values())

	sizeLsRusWords = len(lsRusWords)

	for i in range(0, sizeLsRusWords):
		if (lsRusWords[i].lower() == RuWord.lower()):
			return lsEnWords[i]

	return None
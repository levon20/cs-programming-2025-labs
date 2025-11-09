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
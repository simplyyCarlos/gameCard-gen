#pragma once

#include "cards.h"
#include "qvector.h"
#include "enumYugioh.h"

class Yugioh : public Cards
{
private:

	typeCardYugioh typeCard;
	typeMonstreYugioh typeMonstre;
	attributMonstreYugioh attributMonstre;
	int level;
	int atk;
	int def; 

public:

	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard, typeMonstreYugioh _typeMonster, attributMonstreYugioh _attributMonstre, int _level, int _atk, int _def)
		:Cards(_name, _type, _description, _num), typeCard(_typeCard), typeMonstre(_typeMonster), attributMonstre(_attributMonstre), level(_level), atk(_atk), def(_def)
	{
		// Constructeur carte monstre
	}

	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard)
		:Cards(_name,_type,_description,_num),typeCard(_typeCard)
	{
		// Constructeur carte piège
	}
	void getCards() override;
	void notifyObserver() const override;
	void removeObserver(Observer* observer) override;
	void addObserver(Observer* observer) override;
	~Yugioh();
};


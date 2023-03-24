#pragma once
#include "cards.h"
#include "types.h"

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
	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard);
	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard, typeMonstreYugioh _typeMonstre, attributMonstreYugioh _attributMonstre,int _level,int _atk,int _def);

	~Yugioh();
};


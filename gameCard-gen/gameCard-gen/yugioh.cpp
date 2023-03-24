#include "yugioh.h"

Yugioh::Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard)
	: Cards(_name, _type, _description, _num)
{
	typeCard = _typeCard;
	typeMonstre = Vide_Type;
	attributMonstre = Vide_Attribut;
}

Yugioh::Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard, typeMonstreYugioh _typeMonstre, attributMonstreYugioh _attributMonstre, int _level, int _atk, int _def) 
	: Cards(_name, _type, _description, _num)
{
	typeCard = _typeCard;
	typeMonstre = _typeMonstre;
	attributMonstre = _attributMonstre;
	level = _level;
	atk = _atk;
	def = _def;
}
Yugioh::~Yugioh()
{
}

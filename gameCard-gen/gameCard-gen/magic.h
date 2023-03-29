#pragma once
#include "cards.h"
#include "qvector.h"
#include "types.h"

class Magic : public Cards
{
private:

	QVector<manaMagic> listMana;
	typesMagic typeCard;
	int power;
	int stamina;

public:

	Magic(string _name, string _type, string _description, int _num, QVector<manaMagic> _listMana, typesMagic _typeCard, int _power, int _stamina)
		:Cards(_name, _type, _description, _num), listMana(_listMana), typeCard(_typeCard), power(_power),stamina(_stamina)
	{
	}
	Magic(string _name, string _type, string _description, int _num, QVector<manaMagic> _listMana, typesMagic _typeCard)
		:Cards(_name, _type, _description, _num), listMana(_listMana), typeCard(_typeCard),power(0),stamina(0)
	{
	}
	void getCards() override;
	void notifyObserver() const override;
	void removeObserver(Observer* observer) override;
	void addObserver(Observer* observer) override;
};


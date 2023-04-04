#pragma once

#include "cards.h"
#include "qvector.h"
#include "enumYugioh.h"
#include "types.h"
#include "ErrorHandler.h"
#include <iostream>
using namespace std;

class Yugioh : public Cards
{
private:

	typeCardYugioh typeCard;
	typeMonstreYugioh typeMonstre;
	attributMonstreYugioh attributMonstre;
    ErrorHandler errorHandler;
	int level;
	int atk;
	int def; 

public:

	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard, typeMonstreYugioh _typeMonster, attributMonstreYugioh _attributMonstre, int _level, int _atk, int _def)
		:Cards(_name, _type, _description, _num), typeCard(_typeCard), typeMonstre(_typeMonster), attributMonstre(_attributMonstre), level(_level), atk(_atk), def(_def)
	{
        try {
            bool inEnum = false;
            for (typeCardYugioh card = Monstre_effet; card <= Piege; card = static_cast<typeCardYugioh>(static_cast<int>(card)+1))
            {
                if (typeCard == card) {
                    inEnum = true;
                    break;
                }
            }
            if (!inEnum) {
                throw std::invalid_argument("Invalid card type for monster card");
            }
            inEnum = false;

            for (typeMonstreYugioh monster = Magicien; monster <= Vide_Type; monster = static_cast<typeMonstreYugioh>(static_cast<int>(monster) + 1)) {
                if (typeMonstre == monster) {
                    inEnum = true;
                    break;
                }
            }
            if (!inEnum) {
                throw std::invalid_argument("Invalid monster type");

            }

            inEnum = false;
            for (attributMonstreYugioh attr = Lumiere; attr <= Vide_Attribut; attr = static_cast<attributMonstreYugioh>(static_cast<int>(attr) + 1)) {
                if (attributMonstre == attr) {
                    inEnum = true;
                    break;
                }
            }
            if (!inEnum) {
                throw std::invalid_argument("Invalid monster attribute");

            }
            inEnum = false;
            if (level < 1 || level > 12) {
                throw std::invalid_argument("Invalid monster level");
            }

            if (atk < 0 || atk == NULL) {
                throw std::invalid_argument("Invalid monster attack points");
            }

            if (def < 0 || def == NULL) {
                throw std::invalid_argument("Invalid monster defense points");
            }
            if (_description.empty()) {
                throw std::invalid_argument("Description cannot be empty");
            }
            if (_name.empty()) {
                throw std::invalid_argument("Card name cannot be empty");
            }
            if (_type.empty()) {
                throw std::invalid_argument("Card Type cannot be empty");
            }
            if (_num < 0 || _num == NULL) {
                throw std::invalid_argument("Invalid card serial number");
            }
            

        }
        catch (const std::exception& e) {
            errorHandler.handle(e, "Yugioh card constructor (string _name, string _type, string _description, int _num, typeCardYugioh _typeCard, typeMonstreYugioh _typeMonster, attributMonstreYugioh _attributMonstre, int _level, int _atk, int _def)", __FILE__, __LINE__);
            throw;
        }
	}

	Yugioh(string _name, string _type, string _description, int _num, typeCardYugioh _typeCard)
		:Cards(_name,_type,_description,_num),typeCard(_typeCard)
	{
        try {
            bool inEnum = false;
            for (typeCardYugioh card = Monstre_effet; card <= Piege; card = static_cast<typeCardYugioh>(static_cast<int>(card) + 1))
            {
                if (typeCard == card) {
                    inEnum = true;
                    break;
                }
            }
            if (!inEnum) {
                throw std::invalid_argument("Invalid card type for monster card");
            }
            if (_description.empty()) {
                throw std::invalid_argument("Description cannot be empty");
            }
            if (_name.empty()) {
                throw std::invalid_argument("Card name cannot be empty");
            }
            if (_type.empty()) {
                throw std::invalid_argument("Card Type cannot be empty");
            }
            if (_num < 0 || _num == NULL) {
                throw std::invalid_argument("Invalid card serial number");
            }
        }
        catch (const std::exception& e){
            errorHandler.handle(e, "Yugioh card constructor (string _name, string _type, string _description, int _num, typeCardYugioh _typeCard)", __FILE__, __LINE__);
        }
	}
	void getCards() override;
	void notifyObserver() const override;
	void removeObserver(Observer* observer) override;
	void addObserver(Observer* observer) override;
	~Yugioh();
};


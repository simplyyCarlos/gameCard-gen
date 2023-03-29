#pragma once
#include "cards.h"
class Magic : public Cards
{
private:

public:
	void getCards() override;
	void notifyObserver() const override;
	void removeObserver(Observer* observer) override;
	void addObserver(Observer* observer) override;
};


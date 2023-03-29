#pragma once
#include "observable.h"
#include <string>
#include "qvector.h"
#include "observer.h"
using namespace std;

class Cards : public Observable
{
private: 
	string name;
	string type;
	string description;
	int num;
	QVector<Observer> observerList;
public:
	Cards(string _name, string _type, string _description, int _num);
	virtual ~Cards();
	virtual void getCards() = 0;
};


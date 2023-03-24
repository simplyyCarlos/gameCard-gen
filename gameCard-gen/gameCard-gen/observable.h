#pragma once
#include "observer.h"

class Observable {
public:
	/**
	 * @brief Virtual destructor of the abstract method
	*/
	virtual ~Observable() {}
	/**
	 * @brief Virtual method to add an observer to the list of observer
	 * @param observer Object to add to the list
	*/
	virtual void addObserver(Observer* observer) = 0;
	/**
	 * @brief Method to remove an observer to the list of observer
	 * @param observer observer to remove from the list
	*/
	virtual void removeObserver(Observer* observer) = 0;
	/**
	 * @brief Method to notify all the observer from the observer list that a change append in the database
	*/
	virtual void notifyObserver() const = 0;
};
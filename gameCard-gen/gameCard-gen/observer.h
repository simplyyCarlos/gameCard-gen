#pragma once
class Observer {
public:
	/**
	 * @brief Virtual destructor of the abstract class
	*/
	virtual ~Observer() {}
	/**
	 * @brief Virtual Method that update the view whan there is a changement in the database
	*/
	virtual void updateModel() = 0;
};
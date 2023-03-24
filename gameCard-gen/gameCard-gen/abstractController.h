#pragma once

/**
 * @brief Abstract Class for all the controller
*/
class AbstractController
{
public:
	/**
	 * @brief Virtual Destructor of the abstract class
	*/
	virtual ~AbstractController() {}
	/**
	 * @brief Virtual method that called the method associate to the class
	 * @param id the id that will be control
	 * @param jeu name of the game which is played
	*/
	virtual void control() = 0;
};
#pragma once
#include "abstractController.h"
class SubmitController : public AbstractController 
{
private :

public:
	SubmitController();
	~SubmitController();
	void control() override;
};


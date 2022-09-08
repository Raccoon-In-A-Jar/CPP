#pragma once
#include "propriete.h"
class player
{
public:
	player();
	virtual ~player();

	//achat
	propriete purchase();

	//transactions
	propriete trade();

	//enchères
	propriete auction();

	//hypothèque
	propriete mortgage();


};


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

	//ench�res
	propriete auction();

	//hypoth�que
	propriete mortgage();


};


#pragma once
#include <iostream>
using namespace std;
#include <string>

#include "Weapon.h"



class Knife: public Weapon
{
public:
	Knife();

	virtual int getDamage();

	virtual int getSuckBlood();
	
	virtual bool getCrit();
	
	virtual bool getHold();



};



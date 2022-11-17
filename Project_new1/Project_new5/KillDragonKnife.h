#pragma once
#include <iostream>
using namespace std;
#include <string>

#include "Weapon.h"



class KillDragonKnife : public Weapon
{
public:
	KillDragonKnife();

	virtual int getDamage();

	virtual int getSuckBlood();

	virtual bool getCrit();

	virtual bool getHold();

	int m_SuckRate;
	int m_CritRate;
	int m_HoldRate;

	bool isTrigger(int rate);

};
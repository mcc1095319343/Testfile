#pragma once
#include <iostream>
using namespace std;
#include <string>

class Weapon //≥ÈœÛ¿‡
{
public:

	virtual int getDamage() = 0;

	virtual int getSuckBlood() = 0;

	virtual bool getCrit() = 0;

	virtual bool getHold() = 0;


	string m_WeaponName;
	int m_WeaponDamage;

};






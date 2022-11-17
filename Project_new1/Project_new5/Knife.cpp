#include "Knife.h"


Knife::Knife()
{
	this->m_WeaponName = "ะกตถ";
	this->m_WeaponDamage = 10;
}

int Knife::getDamage()
{
	return this->m_WeaponDamage;
}

int Knife::getSuckBlood()
{
	return 0;
}

bool Knife::getCrit()
{
	return false;
}

bool Knife::getHold()
{
	return false;
}


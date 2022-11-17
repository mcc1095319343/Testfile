#include "KillDragonKnife.h"


KillDragonKnife::KillDragonKnife()
{
	this->m_WeaponName = "一刀999";
	this->m_WeaponDamage = 999;
	this->m_SuckRate = 20;
	this->m_HoldRate = 30;
	this->m_CritRate = 40;
}

int KillDragonKnife::getDamage()
{
	return this->m_WeaponDamage;
}

int KillDragonKnife::getSuckBlood()
{
	if (isTrigger(m_SuckRate))
	{
		return this->m_WeaponDamage*0.5;
	}
}

bool KillDragonKnife::getCrit()
{
	if (isTrigger(m_CritRate))
	{
		return true;
	}
	else
		return false;
}

bool KillDragonKnife::getHold()
{
	if (isTrigger(m_HoldRate))
	{
		return true;
	}
	else
		return false;
}

bool KillDragonKnife::isTrigger(int rate) //决定上方函数
{
	int num = rand() % 100 + 1;
	if (num < rate)
		return true;
	else
		return false;

}

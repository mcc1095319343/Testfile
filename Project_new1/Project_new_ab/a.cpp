#include "a.h"


void A::displayA()
{
	cout << m_i << endl;
}

A::A()
{
	cout << "A的构造函数调用" << endl;
	m_i = 0;
}

A::~A()
{
	cout << "A的析构函数调用" << endl;
}
#include "a.h"


void A::displayA()
{
	cout << m_i << endl;
}

A::A()
{
	cout << "A�Ĺ��캯������" << endl;
	m_i = 0;
}

A::~A()
{
	cout << "A��������������" << endl;
}
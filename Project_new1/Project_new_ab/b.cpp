#include "b.h"


void B::displayB()
{
	cout << "i:";
	m_a1.displayA();
	cout << "j:" << m_j << endl;
	
}

B::B()
{
	cout << "B的构造函数调用" << endl;
	m_j = 10;
}

B::~B()
{
	cout << "B的析构函数调用" << endl;
}
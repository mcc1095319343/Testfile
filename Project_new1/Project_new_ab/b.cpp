#include "b.h"


void B::displayB()
{
	cout << "i:";
	m_a1.displayA();
	cout << "j:" << m_j << endl;
	
}

B::B()
{
	cout << "B�Ĺ��캯������" << endl;
	m_j = 10;
}

B::~B()
{
	cout << "B��������������" << endl;
}
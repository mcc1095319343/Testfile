#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
	
};



void test01()
{
	vector<string>v;
	v.push_back("A");
	v.push_back("B");
	v.push_back("C");
	v.push_back("D");
	v.push_back("E");

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

int main() {

	test01();

	system("pause");

	return 0;
}
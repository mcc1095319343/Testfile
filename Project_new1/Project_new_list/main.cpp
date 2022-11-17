#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void printList(const list<int>& L) 
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(70);
	L1.push_back(30);
	L1.push_back(40);
	L1.sort();

	L1.sort(myCompare);
	printList(L1);

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
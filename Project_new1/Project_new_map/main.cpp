#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>

class Person
{
public:
	Person(string name, int money) : m_Name(name), m_Money(money) {}

	string m_Name;
	int m_Money;
};


void setPerson(vector<Person> &v)
{
	string nameSeed = "ABCDEFGHIJ";
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		it->m_Name += nameSeed[]
	}*/
	string name;
	for (int i = 0; i < 10;i++)
	{
		string name = "Ա��";
		name += nameSeed[i];
		int money = rand() % 10000+10000;
		Person p1(name, money);
		v.push_back(p1);
	}
}

void randomSetGroup(vector<Person>&v, multimap<int, Person>&m)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		int DeptID = rand() % 3;
		m.insert(make_pair(DeptID, *it));
	}

}

void printVector(vector< Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << " ���ʣ�" << it->m_Money << endl;
	}
}

void printMap(multimap<int, Person>&m)
{
	cout << "�߻���" << endl;
	multimap<int, Person>::iterator pos = m.find(0); //�ҵ�0�еļ���
	int DeptSize = m.count(0); //ͳ��0������
	//cout << DeptSize << endl;
	int index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "���ű�ţ�" << pos->first << " ������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Money << endl;
		cout << index << endl;
	}

	cout << "������" << endl;
	pos = m.find(1);
	DeptSize = m.count(1); //3������
	index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "���ű�ţ�" << pos->first << " ������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Money << endl;
	}

	cout << "�з���" << endl;
	pos = m.find(2);
	DeptSize = m.count(2); //3������
	index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "���ű�ţ�" << pos->first << " ������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Money << endl;
	}
}


void test01()
{
	srand((unsigned int) time(NULL));
	//����Ա��
	vector<Person>v;
	setPerson(v); //��ʼ���������Բ�����vector��
	//printVector(v); //��ӡ�����е���������

	//Ա������
	multimap<int, Person>m;
	randomSetGroup(v, m);
	//��ʾԱ��
	printMap(m);
}

int main() {

	test01();

	system("pause");

	return 0;
}
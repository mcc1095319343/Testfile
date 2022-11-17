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
		string name = "员工";
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
		cout << "姓名：" << it->m_Name << " 工资：" << it->m_Money << endl;
	}
}

void printMap(multimap<int, Person>&m)
{
	cout << "策划：" << endl;
	multimap<int, Person>::iterator pos = m.find(0); //找到0中的几人
	int DeptSize = m.count(0); //统计0中人数
	//cout << DeptSize << endl;
	int index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "部门编号：" << pos->first << " 姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Money << endl;
		cout << index << endl;
	}

	cout << "美术：" << endl;
	pos = m.find(1);
	DeptSize = m.count(1); //3个部门
	index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "部门编号：" << pos->first << " 姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Money << endl;
	}

	cout << "研发：" << endl;
	pos = m.find(2);
	DeptSize = m.count(2); //3个部门
	index = 0;
	for (; pos != m.end() && index<DeptSize; pos++, index++)
	{
		cout << "部门编号：" << pos->first << " 姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Money << endl;
	}
}


void test01()
{
	srand((unsigned int) time(NULL));
	//创建员工
	vector<Person>v;
	setPerson(v); //初始化人物属性并放入vector中
	//printVector(v); //打印容器中的人物属性

	//员工分组
	multimap<int, Person>m;
	randomSetGroup(v, m);
	//显示员工
	printMap(m);
}

int main() {

	test01();

	system("pause");

	return 0;
}
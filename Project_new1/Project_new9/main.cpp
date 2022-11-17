#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;

class Person
{
public:
	Person(string name, int score) : m_Name(name), m_Score(score) {}
	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p1(name, score); //����5��ѡ��
		v.push_back(p1); //����v��
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d1;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 40 + 60; //60-100
			d1.push_back(score); //����deque��
		}
		sort(d1.begin(), d1.end());
		d1.pop_front();
		d1.pop_back();
		int sum = 0;
		for (deque<int>::iterator dit = d1.begin(); dit != d1.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d1.size();
		(*it).m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << "  ������" << (*it).m_Score << endl;
	}
}

void test01()
{
	srand((unsigned int) time(NULL));
	vector<Person>v1;
	createPerson(v1);
	setScore(v1);
	showScore(v1);


}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
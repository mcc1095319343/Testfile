#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Company
{
public:
	Company(); //���캯��

	void displayMenu(); //��ʾ�˵�

	void exitSystem();

	~Company(); //��������


};

class Worker
{
public:
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;

	string m_Name;
	int m_Id;
	int m_DeptId;

};

//Ա����
class Employee :public Worker
{
public:

	//���캯��
	Employee(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};

//������
class Manager :public Worker
{
public:

	Manager(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};

//�ϰ���
class Boss :public Worker
{
public:

	Boss(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡְ����λ����
	virtual string getDeptName();
};
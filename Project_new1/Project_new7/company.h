#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Company
{
public:
	Company(); //构造函数

	void displayMenu(); //显示菜单

	void exitSystem();

	~Company(); //析构函数


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

//员工类
class Employee :public Worker
{
public:

	//构造函数
	Employee(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	virtual string getDeptName();
};

//经理类
class Manager :public Worker
{
public:

	Manager(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	virtual string getDeptName();
};

//老板类
class Boss :public Worker
{
public:

	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位名称
	virtual string getDeptName();
};
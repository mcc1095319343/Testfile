#pragma  once
#include <iostream>
using namespace std;

class MyString
{
public:
	//默认构造
	MyString();

	//有参构造
	MyString(char* str);

	//拷贝构造
	MyString(const MyString & str);

	//尾插
	void pushBack(int val);

	//根据位置设置数据
	void setData(int index, int val);

	//根据位置获取数据
	int getData(int index);

	//获取数组大小
	int getSize();

	//获取数组容量
	int getCapacity();

	//重载[]运算符
	int& operator[](int index);


	//析构函数
	~MyString();



private:
	//指向堆区的数据指针
	char * pString;

	//数组容量
	int m_Capacity;

	//数组大小
	int m_Size;

};
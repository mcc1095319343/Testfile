#pragma  once
#include <iostream>
using namespace std;

class MyString
{
public:
	//Ĭ�Ϲ���
	MyString();

	//�вι���
	MyString(char* str);

	//��������
	MyString(const MyString & str);

	//β��
	void pushBack(int val);

	//����λ����������
	void setData(int index, int val);

	//����λ�û�ȡ����
	int getData(int index);

	//��ȡ�����С
	int getSize();

	//��ȡ��������
	int getCapacity();

	//����[]�����
	int& operator[](int index);


	//��������
	~MyString();



private:
	//ָ�����������ָ��
	char * pString;

	//��������
	int m_Capacity;

	//�����С
	int m_Size;

};
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "company.h"

void test01()
{
	Company potato;
	int choice;
	while (true)
	{
		potato.displayMenu(); //��ʾ�˵�
		cout << "��ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //�˳�ϵͳ
			potato.exitSystem();
			break;
		case 1: //���ְ��
			
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls");
			break;
		}
	}
	
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
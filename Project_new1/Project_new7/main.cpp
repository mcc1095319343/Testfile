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
		potato.displayMenu(); //显示菜单
		cout << "请选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //退出系统
			potato.exitSystem();
			break;
		case 1: //添加职工
			
			break;
		case 2: //显示职工
			break;
		case 3: //删除职工
			break;
		case 4: //修改职工
			break;
		case 5: //查找职工
			break;
		case 6: //排序职工
			break;
		case 7: //清空文件
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
#include "mystring.h"


MyString::MyString()
{

}

MyString::MyString(char* str)
{
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);
}

MyString::MyString(const MyString& str)
{
	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = str.m_Size;
}

MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

}
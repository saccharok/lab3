#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Wolf
{
public:
	Wolf InitWolf(std::string name, int age, int number, int code)
	{
		Wolf wolf;
		char* n = new char[name.length()];
		if (n == nullptr)
		{
			name = "����";
		};
		if (age == 0)
		{
			age = 6;
		}
		if (number < 1 || number > 2)
		{
			number = 1;
		}
		if (code < 100000 || code >999999)
		{
			code = 123456;
		}
		delete[] n;
		return wolf;
	};//����������� � ����������
	void PrintWolf()
	{
		cout << "��� ����� - " << name << ", ������� - " << age << ", ����� ������� - " << number << "��� �������������� ���������� - " << code << endl;
	};//����� ������� ������
	~Wolf();//����������
private:
	std::string name;
	int age;
	int number;
	int code;
};


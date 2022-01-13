#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Fox
{
public:
	Fox InitFox(std::string name, double weight, int age, int number, int code)
	{
		Fox fox;
		char* n = new char[name.length()];
		if (n == nullptr)
		{
			name = "����";
		}
		if (weight == 0)
		{
			weight = 3.2;
		}
		if (age == 0)
		{
			age = 4;
		}
		if (number < 5 || number > 6)
		{
			number = 5;
		}
		if (code < 100000 || code >999999)
		{
			code = 123456;
		}
		delete[] n;
		return fox;
	};//����������� � ����������
	void PrintFox()
	{
		cout << "��� ���� - " << name << ", ��� ���� - " << weight << ", ������� ���� - " << age << ", ����� ������� - " << number << ", ��� ���������� - " << endl;
	};//����� ������� ������
	~Fox();//����������
private:
	std::string name;
	double weight;
	int age;
	int number;
	int code;
};
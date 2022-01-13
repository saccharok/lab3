#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Bear
{
public:
	Bear InitBear(std::string name, double weight, double high, int age)
	{
		Bear bear;
		char* n = new char[name.length()];
		if (n == nullptr)
		{
			name = "����";
		}
		if (weight == 0)
		{
			weight = 3.2;
		}
		if (high == 0)
		{
			high = 1.6;
		}
		if (age == 0)
		{
			age = 4;
		}
		delete[] n;
		return bear;
	};//����������� � ����������
	void PrintBear()
	{
		cout << "��� �������" << name << ", ��� ��� - " << weight << ", ��� ���� - " << high << ", ��� ������� - " << endl;
	};//����� ������� ������
	~Bear();//����������
private:
	std::string name;
	double weight;
	double high;
	int age;
};
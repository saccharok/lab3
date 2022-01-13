#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Raccon
{
public:
	Raccon InitRaccon(std::string name, double weight, int age)
	{
		Raccon raccon;
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
		delete[] n;
		return raccon;
	};//����������� � ����������
	void PrintRaccon()
	{
		cout << "��� ����� - " << name << ", ��� ��� - " << weight << ", ��� ������� - " << age << endl;
	};//����� ������� ������
	~Raccon();//����������
private:
	std::string name;
	double weight;
	int age;
};


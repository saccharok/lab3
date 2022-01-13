#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Beaver
{
public:
	Beaver InitBeaver(std::string name, double weight, double lenght)
	{
		Beaver beaver;
		char* n = new char[name.length()];
		if (n == nullptr)
		{
			name = "����";
		}
		if (weight == 0)
		{
			weight = 3.2;
		}
		if (lenght == 0)
		{
			lenght = 10.3;
		}
		delete[] n;
		return beaver;
	};//����������� � ����������
	void PrintBeaver()
	{
		cout << "��� ����� - " << name << ", ��� ����� - " << weight << ", ����� ������ - " << lenght << endl;
	};//
	~Beaver();
private: 
	std::string name;
	double weight;
	double lenght;
};


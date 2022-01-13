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
			name = "Саша";
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
	};//конструктор с параметром
	void PrintBeaver()
	{
		cout << "Имя бобра - " << name << ", вес бобра - " << weight << ", длина хвоста - " << lenght << endl;
	};//
	~Beaver();
private: 
	std::string name;
	double weight;
	double lenght;
};


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
			name = "Олег";
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
	};//конструктор с параметром
	void PrintWolf()
	{
		cout << "Имя волка - " << name << ", возраст - " << age << ", номер вольера - " << number << "код ответственного сотрудника - " << code << endl;
	};//вывод объекта класса
	~Wolf();//деструктор
private:
	std::string name;
	int age;
	int number;
	int code;
};


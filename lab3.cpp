// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Wolf.h"
#include "Beaver.h"
#include "Fox.h"
#include "Raccon.h"
#include "Bear.h"
using namespace std;

std::string SetName(std::string name);//ввод имени
int SetAge(int age);//ввод возраста
int SetNumber(int number);//ввод номера вольера
int SetCode(int code);//ввод кода стотрудника
double SetWeight(double weight);//ввод веса
double SetLength(double length);//ввод длины хвоста
double SetHigh(double high);//ввод роста

int main()
{
	std::string Name;
	int Age;
	int Number;
	int Code;
	double Weight;
	double Lenght;
	double High;
menu:
	system("cls");
	cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
	cout << "1 " << "Волки" << endl;
	cout << "2 " << "Бобры" << endl;
	cout << "3 " << "Лисы" << endl;
	cout << "4 " << "Еноты" << endl;
	cout << "5 " << "Медведи" << endl;
	int check = 0;
	while (check < 1 || check > 5)
	{
		cin >> check;
		cout << endl;
	};
	if (check == 1)
	{
		Wolf wolf1;
		std::string Name;
		Name = SetName(Name);
		Age = SetAge(Age);
		Number = SetNumber(Number);
		Code = SetCode(Code);
		wolf1 = wolf1.InitWolf(Name, Age, Number, Code);
		Wolf wolf2;
		wolf2 = wolf2.InitWolf("Волк", 5, 2, 138031);
		wolf1.PrintWolf();
		wolf2.PrintWolf();
		goto menu;
	}
	if (check == 2)
	{
		Beaver beaver1;
		Name = SetName(Name);
		Weight = SetWeight(Weight);
		Lenght = SetLength(Lenght);
		beaver1 = beaver1.InitBeaver(Name, Weight, Lenght);
		Beaver beaver2;
		beaver2 = beaver2.InitBeaver("Бобр", 5.4, 10);
		beaver1.PrintBeaver();
		beaver2.PrintBeaver();
		goto menu;
	}
	if (check == 3)
	{
		Fox fox1;
		Name = SetName(Name);
		Weight = SetWeight(Weight);
		Age = SetAge(Age);
		Number = SetNumber(Number);
		Code = SetCode(Code);
		fox1 = fox1.InitFox(Name, Weight, Age, Number, Code);
		Fox fox2;
		fox2 = fox2.InitFox("Лиса", 5.5, 3, 6, 345183);
		fox1.PrintFox();
		fox2.PrintFox();
		goto menu;
	}
	if (check == 4)
	{
		Raccon raccon1;
		Name = SetName(Name);
		Weight = SetWeight(Weight);
		Age = SetAge(Age);
		raccon1 = raccon1.InitRaccon(Name, Weight, Age);
		Raccon raccon2;
		raccon2 = raccon2.InitRaccon("Енот", 2.2, 1);
		raccon1.PrintRaccon();
		raccon2.PrintRaccon();
		goto menu;
	}
	if (check == 5)
	{
		Bear bear1;
		Name = SetName(Name);
		Weight = SetWeight(Weight);
		High = SetHigh(High);
		Age = SetAge(Age);
		bear1 = bear1.InitBear(Name, Weight, High, Age);
		Bear bear2;
		bear2 = bear2.InitBear("Медведь", 52, 1.6, 8);
		bear1.PrintBear();
		bear2.PrintBear();
		goto menu;
	}
}

std::string SetName(std::string name)
{
	cout << "Введите имя: ";
	std::cin >> name;
	cout << endl;
	return name;
}

int SetAge(int age)
{
	cout << "Введите его возраст: ";
	cin >> age;
	cout << endl;
	return age;
}

int SetNumber(int number)
{
	cout << "Введите номер вольера: ";
	cin >> number;
	cout << endl;
	return number;
}

int SetCode(int code)
{
	cout << "Введите код сотрудника: ";
	cin >> code;
	cout << endl;
	return code;
}

double SetWeight(double weight)
{
	cout << "Введите его вес: ";
	cin >> weight;
	cout << endl;
	return weight;
}

double SetLength(double length)
{
	cout << "Введите длину хвоста: ";
	cin >> length;
	cout << endl;
	return length;
}

double SetHigh(double high)
{
	cout << "Введите его рост: ";
	cin >> high;
	cout << endl;
	return high;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

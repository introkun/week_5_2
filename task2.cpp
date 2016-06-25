#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, y, cycle = 1, total = 1;

	cout << "вычисляем значение x в степени y" "\n"
		"введите число х";
	cin >> x;
	cout << "введите число y";
	cin >> y;

	if (y <= 0 || x == 0)
	{
		cout << "неверные данные, проверте число \n";
		return 1;
	}

	while (cycle <= y)
	{
		total = total*x;
		cycle++;
	}

	cout << x << " в степени " << y << " = " << total << "\n";
	return 0;
}



//*. Напишите программу, которая запрашивает два целых числа x и y, 
//*после чего вычисляет и выводит значение x в степени y.

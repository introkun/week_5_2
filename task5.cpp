#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int k, factor = 2;

	cout << "выводит на экран таблицу умножения на k" "\n"
		"введите к ";
	cin >> k;

	while (factor <= 20)
	{
		cout << k << " x " << factor << " = " << k * factor << endl;
		factor++;
	}
	return 0;
}



//Написать программу, которая выводит на экран таблицу умножения на k, 
//где k – номер варианта. Например, для 7-го варианта:
//7 x 2 = 14
//7 x 3 = 21

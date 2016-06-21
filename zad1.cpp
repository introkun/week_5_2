#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int b = 500;
	int a, totle = 0;

	cout << "узнаем сумму целых чисел от а до 500" "\n"
		"введите число a: ";
	cin >> a;
	if (a > b)
	{
		cout << "a больше 500, нельзя выполнить задачу";
		return 1;
	}
	while (a<=b)
	{
		totle = totle + a;
		a++;
	}
	cout << "сумма целых чисел от a до 500 = " << totle << endl;
}


//*Напишите программу, которая вычисляет
//*сумму целых чисел от а до 500 (значение
//*	a вводится с клавиатуры).
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a, total = 1;
	cout << "Находим произведение всех целых чисел от a до 20" "\n"
		"введите число а ";
	cin >> a;
	if (a < 1)
	{
		cout << "вы ввели неверное число, а должна быть: 1 <= a <= 20";
	}
	while (a <= 20)
	{
		total *= a;
		a++;
	}
	cout << "произведение чисел = " << total << endl;
}


//*Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры : 1 <= a <= 20).

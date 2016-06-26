#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "находим среднее арифметическое всех целых чисел от 1 до 1000" << endl;
	int cycle = 1, total = 0;
	while (cycle <= 1000)
	{
		total += cycle;
		cycle++;
	}
	cout << "сумма чисел от 1 до 1000 = " << total << endl
		<< "среднее арифметическое всех целых чисел от 1 до 1000 = "
		<< total / 1000 << endl;
}




//*Найти среднее арифметическое всех целых чисел от 1 до 1000

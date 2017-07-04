// c++3.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
using namespace std;

int main()
{
	setlocale(0, "");
	double num;

	cout << "¬ведите произвольное число: ";
	cin >> num;

	if (num < 10) { // ≈сли введенное число меньше 10.
		cout << "Ёто число меньше 10." << endl;
	}
	else { // иначе
		cout << "Ёто число больше либо равно 10." << endl;
	}
	system("pause");
	return 0;
}
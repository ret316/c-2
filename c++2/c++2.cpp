// c++2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите число: ";
	cin >> a;
	cout << "Введите число: ";
	cin >> b;
	c = a + b;
	cout <<"Сумма равна " << c << endl;
	system("pause");
    return 0;
}


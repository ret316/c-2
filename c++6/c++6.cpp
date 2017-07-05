// c++6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void hello(string hello)
{
	cout << "Здравствуйте " << hello << endl;
}

int main()
{
	string name;
	setlocale(0, "");
	cout << "введите своё имя: ";
	getline(cin, name);
	cout << endl;
	hello(name);
	cin.get();
    return 0;
}


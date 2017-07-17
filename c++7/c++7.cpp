// c++7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b = 5;

	a = 10;
	b = a + b;
	cout << "b is " << b << endl;

	int *z = new int;
	int *x = new int(5);

	*z = 10;
	*x = *z + *x;

	cout << "x is " << *x << endl;

	delete z;
	delete x;

	cin.get();
    return 0;
}


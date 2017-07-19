// c++8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter integer value: ";
	cin >> num;

	int *p_darr = new int[num];
	for (int i = 0; i < num; i++) {
		//p_darr[i] = i;
		p_darr[i] = rand();
		cout << "Value of " << i /*+ 1 */<< " element is " << p_darr[i] << endl;
	}
	delete[] p_darr;
	//cin.get();
	system("pause");
	return 0;
}
// c++6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void hello(string hello)
{
	cout << "������������ " << hello << endl;
}

int main()
{
	string name;
	setlocale(0, "");
	cout << "������� ��� ���: ";
	getline(cin, name);
	cout << endl;
	hello(name);
	cin.get();
    return 0;
}


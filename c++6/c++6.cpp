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

bool password_is_valid(string password)
{
	string valid_pass = "qwerty123";
	if (valid_pass == password)
		return true;
	else
		return false;
}

void get_pass()
{
	string user_pass;
	cout << "������� ������: ";
	getline(cin, user_pass);
	if (!password_is_valid(user_pass)) {
		cout << "�������� ������!" << endl;
		get_pass();
	}
	else {
		cout << "������ ��������." << endl;
	}
}

int main()
{
	string name;
	setlocale(0, "");
	cout << "������� ��� ���: ";
	getline(cin, name);
	cout << endl;
	hello(name);
	get_pass();
	cin.get();
    return 0;
}


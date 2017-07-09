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
	cout << "Введите пароль: ";
	getline(cin, user_pass);
	if (!password_is_valid(user_pass)) {
		cout << "Неверный пароль!" << endl;
		get_pass();
	}
	else {
		cout << "Доступ разрешен." << endl;
	}
}

int main()
{
	string name;
	setlocale(0, "");
	cout << "введите своё имя: ";
	getline(cin, name);
	cout << endl;
	hello(name);
	get_pass();
	cin.get();
    return 0;
}


// c++5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	std::string students[10] = {
		"Иванов", "Петров", "Сидоров",
		"Ахмедов", "Ерошкин", "Выхин",
		"Андеев", "Вин Дизель", "Картошкин", "Чубайс"
	};

	for (int i = 0; i < (end(students) - begin(students)) ; i++)
	{
		std::cout << students[i] << std::endl;
	}

	cin.get();
    return 0;
}


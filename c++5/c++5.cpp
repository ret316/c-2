// c++5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	std::string students[10] = {
		"������", "������", "�������",
		"�������", "�������", "�����",
		"������", "��� ������", "���������", "������"
	};

	for (int i = 0; i < (end(students) - begin(students)) ; i++)
	{
		std::cout << students[i] << std::endl;
	}

	cin.get();
    return 0;
}


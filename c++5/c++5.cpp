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

	cout << "\n\n";

	int arr[10];
	for (int j = 0; j < 10; j++) {
		cout << "[" << j + 1 << "]" << ": ";
		cin >> arr[j];
	}
	cout << "\n��� ������: ";
	for (int j = 0; j < 10; ++j) {
		cout << arr[j] << " ";
	}
	cout << endl;
	cin.get();
	system("pause");
    return 0;
}


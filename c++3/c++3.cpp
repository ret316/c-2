// c++3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
using namespace std;

int main()
{
	setlocale(0, "");
	double num;

	cout << "������� ������������ �����: ";
	cin >> num;

	if (num < 10) { // ���� ��������� ����� ������ 10.
		cout << "��� ����� ������ 10." << endl;
	}
	else { // �����
		cout << "��� ����� ������ ���� ����� 10." << endl;
	}
	system("pause");
	return 0;
}
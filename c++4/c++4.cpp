// c++4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
using namespace std;

int main()
{
	int sum = 0;
	setlocale(0, "");
	for (int i = 1; i <= 1000; i++) {
		sum = sum + i;
	}
	cout << "Summ ����� ����� �� 1 �� 100 = " << sum << endl;
	//Console::ReadLine();
	cin.get();
	//system("pause");
	return 0;
}


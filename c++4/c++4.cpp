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
	cout << "����� ����� �� 1 �� 1000 = " << sum << endl;
	//Console::ReadLine();
	
	//system("pause");

	int j = 0;
	int sum1 = 0;
	while (j<2000)
	{
		j++;
		sum1 += j;
	}
	cout << "����� ����� �� 1 �� 2000 = " << sum1 << endl;
	int k = 0, sum2 = 0;
	do {
		k++;
		sum2 += k;
	} while (k < 3000);
	cout << "����� ����� �� 1 �� 3000 = " << sum2 << endl;
	cin.get();
	return 0;
}


// Lab_03_4.cpp
// < ����������, ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	do
	{
		cout << "R = ";
		cin >> R;
	} while (R <= 0);
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if ((y <= pow(R*R - pow(x + R, 2),  2) && y >= 0 && y <= R && x >= -R && x <= 0) || (y <= pow(R*R - pow(x - R, 2), 2) && y >= -R && y <= 0 && x >= 0 && x <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
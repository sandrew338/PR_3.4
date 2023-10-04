// Lab_03_4.cpp
// < Назаркевич, Андрйі >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	do
	{
		cout << "R = ";
		cin >> R;
	} while (R <= 0);
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y <= pow(R*R - pow(x + R, 2),  2) && y >= 0 && y <= R && x >= -R && x <= 0) || (y <= pow(R*R - pow(x - R, 2), 2) && y >= -R && y <= 0 && x >= 0 && x <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
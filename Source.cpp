// Lab_02.cpp
// < Патрітєєв Костянтин Борисович >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double z1, z2, a;
	const float PI = 4 * atan(1);
	cout << "a = ? "; cin >> a;
	z1 = sin(4 * a) * 1. / (1 + cos(4 * a)) * cos(2 * a) / (1 + cos(2 * a));
	z2 = 1. / tan(3. / 2 * PI - a);
	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2 << endl;


	return 0;
}
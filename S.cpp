#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;


int main()
{
	double x, y, z, s;
	setlocale(LC_ALL, "Russian");
	x = 0.1722; y = 6.33; z = 0.000325;
	//cout << "������� x ";
	//cin >> x;
	//cout << "������� y ";
	//cin >> y;
	//cout << "������� z ";
	//cin >> z;
	s = 5 * atan(x) - 0.25*acos(x)*((x + 3)*abs(x - y) + x*x) / (abs(x - y)*z + x*x);
	cout << "s = " << s;
	system("pause");
	

    return 0;
}


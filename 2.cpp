#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;
double  x;
double  y;
double  b;
double  fx;
int static  typefx;
bool static check=true;


double f(int typefx, double x)
{
	cout << "Now you should choose the type of the function. Enter '1' to use exp. Enter '2' to use x^2 ";
	cin >> typefx;
	double fx = 0;
	if (typefx == 1) fx = exp(x);
	else if (typefx == 2) fx = pow(x, 2);
	else {
		cout << "Wrong function type. Please restart the program and follow the instructions";
		check = false;	}
	return fx;
}

double one(double fx,double y)
{
	b = pow((pow(fx, 2) + y), 3);
		return (b);
}
double two(double fx, double y)
{
	b = log(abs(fx / y)) + pow((fx + y), 3);
	return b;
}
double three(double fx, double y)
{
	b=log(fx) + pow(pow(fx, 2) + y, 3);
	return b;
}


int main()
{
	cout << "Please enter x ";
	cin >> x;
	cout << "Please enter y ";
	cin >> y;
	fx = 0;
	typefx = 5;
	fx = f(typefx, x);
	cout << typefx;
	if (check)
	{
		if (y == 0) b = 0;
		else if (x == 0) b=one(fx, y) ;
		else if (x / y < 0) b =two(fx, y) ;
		else   b = three(fx, y);
		cout << "x = " << x << " y = " << y << " f(x) = " << typefx << " b = " << b << endl;
	}
	system("pause");
	return 0;
}



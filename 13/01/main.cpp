#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	cout << "Enter a fraction: ";
	int a,  b;
	cin >> a;
	cin.ignore();
	cin >> b;
	Fraction one( a,  b);

	cout << "Enter another fraction: ";
	int c, d;
	cin >> c;
	cin.ignore();
	cin >> d;
	Fraction two(c, d);

	cout << one << " + " << two << " = " << one + two << endl;
	cout << one << " - " << two << " = " << one - two << endl;
	cout << one << " * " << two << " = " << one * two << endl;
	cout << one << " / " << two << " = " << one / two << endl;
	//cout << one << "++ = "<< one++;
	//cout << two << "-- =" << two--;




	return 0;
}
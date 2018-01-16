#include <iostream>
#include "ComplexNumbers.h"	
using namespace std;

int main()
{
	cout << "Enter a complex number U=a+bi: ";
	int a, b;
	cin >> a;
	cin.ignore();
	cin >> b;
	cin.ignore();
	ComplexNumbers U(a, b);
	cout << endl;


	int c, d;
	cout << "Enter another complex number V=c+di: ";
	cin >> c;
	cin.ignore();
	cin >> d;
	cin.ignore();
	ComplexNumbers V(c, d);
	cout << endl << endl;
	cout << "U + V = " << U + V;
	cout << "U - V = " << U - V;
	cout << "U * V = " << U * V;
	cout << "U / V = " << U / V;

	return 0;

}
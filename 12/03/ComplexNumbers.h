#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class ComplexNumbers
{
private:
	double real;
	double imag;
public:
	ComplexNumbers();
	ComplexNumbers(double r, double im);

	ComplexNumbers operator+(const ComplexNumbers& other);
	ComplexNumbers operator-(const ComplexNumbers& other);
	ComplexNumbers operator*(const ComplexNumbers& other);
	ComplexNumbers operator/(const ComplexNumbers& other);

	friend ostream& operator<<(ostream& os ,const ComplexNumbers& a);

};


#include "ComplexNumbers.h"


ComplexNumbers::ComplexNumbers()
{
	real = 0;
	imag = 0;
}
ComplexNumbers::ComplexNumbers(double r, double im)
{
	real = r;
	imag = im;
}

ComplexNumbers ComplexNumbers:: operator+(const ComplexNumbers& other)
{
	ComplexNumbers result;
	result.real = this->real + other.real;
	result.imag = this->imag + other.imag;
	return result;
}
ComplexNumbers ComplexNumbers:: operator-(const ComplexNumbers& other)
{
	ComplexNumbers result;
	result.real = this->real - other.real;
	result.imag = this->imag - other.imag;
	return result;
}
ComplexNumbers ComplexNumbers:: operator*(const ComplexNumbers& other)
{
	ComplexNumbers result;
	result.real = this->real*other.real - this->imag*other.imag;
	result.imag = this->real*other.imag + this->imag*other.real;
	return result;
}
ComplexNumbers ComplexNumbers:: operator/(const ComplexNumbers& other)
{
	ComplexNumbers result;
	result.real = ((this->real*other.real + this->imag*other.imag) / (other.real*other.real + other.imag*other.imag));
	result.imag = (this->imag*other.real - this->real*other.imag) / (other.real*other.real + other.imag*other.imag);
	return result;
}

ostream& operator<<(ostream& os, const ComplexNumbers& a)
{
	os << a.real << " + " << a.imag << "i" << endl;
	return os;
}

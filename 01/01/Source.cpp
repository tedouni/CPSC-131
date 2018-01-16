//Tayseer Edouni CPSC 131 
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

template<class T>
void DisplayArray(T a[], int b)
{

	for (int i = 0; i < b; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

}

template <class F>
void SortArray(F a[],int b)
{
	sort(a, a + b);

	;
}

int main(void)
{
	int a[5] = { 44, 55, 22, 88, 33 };
	string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Dec" };
	char vowels[5] = { 'E', 'U', 'A', 'I', 'O' };

	cout << "original array a: ";
	DisplayArray(a,5);
	SortArray(a,5);
	cout << "sorted array a: ";
	DisplayArray(a,5);
	cout << endl;

	cout << "original array month: ";
	DisplayArray(month,12);
	SortArray(month,12);
	cout << "sorted array month: ";
	DisplayArray(month,12);
	cout << endl;

	cout << "original array vowels: ";
	DisplayArray(vowels,5);
	SortArray(vowels,5);
	cout << "sorted array vowels: ";
	DisplayArray(vowels,5);

	return 0;
}



//Tayseer Edouni CPSC 131 Problem 1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person
{
	string name;
	int age;
	float gpa;
};

void CopyData(string a, Person b[]);

void Display(Person a[]);

void Display(double AgeAve,double GpaAve);

void Display(Person a[], double GpaAve);

void ComputeAverage(Person a[], double &AgeAve, double &GpaAve);

 
int main(void)
{
	Person P[6];
	double AgeAve = 0;
	double GpaAve = 0;

	string fileName = "data.txt";
	CopyData(fileName, P);
	Display(P);
	ComputeAverage(P, AgeAve, GpaAve);
	Display(AgeAve, GpaAve);
	Display(P, GpaAve);

	return 0;
}

void CopyData(string a, Person b[])
{
	fstream f;

	f.open(a,ios::in); //open file

	int i = 0;

	while (!inputFile.eof())
	{
		f >> b[i].name >> b[i].age >> b[i].gpa;
		i++;
	}
    
    f.close(); 
}

void Display(Person a[])
{
	for (int i = 0; i < 6; i++)
	{
		cout << a[i].name<<" ";
	}
	cout << endl;
}

void  ComputeAverage(Person a[], double &AgeAve, double &GpaAve)
{
	double AgeTotal = 0;		
	double GpaTotal = 0;		
	for (int i = 0; i < 6; i++)
	{
		AgeTotal += a[i].age;
		GpaTotal += a[i].gpa;
	}

	 AgeAve = AgeTotal / 6;
	 GpaAve = GpaTotal / 6;

}

void Display(double AgeAve, double GpaAve)
{
	cout << "Age avg: " << AgeAve << endl;
	cout << "Gpa avg: " << GpaAve << endl;
}

void Display(Person a[], double GpaAve)
{	
	cout << "Those who have a gpa higher than the average gpa are: " << endl;
	for (int i = 0; i < 6; i++)
	{
		if (a[i].gpa> GpaAve)		//Test if gpa is higher than average gpa
		{
			cout << a[i].name << " " << a[i].age << " " << a[i].gpa << endl;
		}
	}
}

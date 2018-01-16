#include <iostream>
#include <string>
#include <fstream>
#include "BST.h"	
using namespace std;

struct Person
{
	int id;
	string name;
	int balance;
}; 

void showMenu();
char getChoice();

int main()
{
	Person a[6];
	BST myTree;
	int idIndex[] = { 77, 88, 99 };
	int indexValue = 0;
	fstream inputfile;
	inputfile.open("datafile.txt", ios::in);
	int i = 0;

	while (!inputfile.eof())

	{
		inputfile >> a[i].id >> a[i].name >> a[i].balance;
		i++;
	}

	for (int i = 0; i < 6; i++)
	{
		myTree.openNewAccount(a[i].id, a[i].balance, a[i].name);
	}
	
	inputfile.close();

	char cont;

	do
	{
		showMenu();
		char choice = getChoice();
		string nameOfCustomer;
		int idNumber, money, balanceNumber;

		switch (choice)
		{
		case 'a':
			myTree.displayAllAccounts();
			cout << endl << endl;
			break;
		case 'b':
			cout << "Enter your ID Number:";
			cin >> idNumber;
			myTree.displayMyBalance(idNumber);
			cout << endl << endl;
			break;
		case'c':
			cout << "Enter your ID number and how much you want to deposit: ";
			cin >> idNumber;
			cin >> money;
			myTree.depositMoney(idNumber, money);
			cout << endl << endl;
			break;
		case 'd':
			cout << "Enter your ID number and how much you want to withdraw: ";
				cin >> idNumber >> money;
				myTree.withdrawMoney(idNumber, money);
				cout << endl << endl;
				break;
		case 'e':
			cout << "Enter your ID Number: ";
			cin >> idNumber;
			myTree.closeMyAccount(idNumber);
			cout << "Account number "<<idNumber<<" Closed\n";
			break;

		case 'f':
			cout << "Enter your name: ";
			cin >> nameOfCustomer;
			balanceNumber = 0;
			idNumber = idIndex[indexValue];
			indexValue++;
			myTree.openNewAccount(idNumber, balanceNumber, nameOfCustomer);
			break;

		default:
			getChoice();
			break;

		}
		cout << "CONTINUE(y/n)? ";
		cin >> cont;
	} while (cont!='n');

	return 0;
}

void showMenu()
{
	cout << "--------------Bank Of California------------------\n";
	cout << "a. Display all accounts\n";
	cout << "b. Show my balance\n";
	cout << "c. Deposit\n";
	cout << "d. Withdraw\n";
	cout << "e. Close account\n";
	cout << "f. Open a new account\n\n\n";
}
char getChoice()
{
	cout << "Please enter your choice (a-f): ";
	char choice;
	cin >> choice;
	return choice;
}
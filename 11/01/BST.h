//#pragma once
#ifndef BST_H
#define BST_H

	
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class BST
{
private:
	struct NODE
	{
		int IdN; //ID key value
		string CName;
		int balance;
		NODE* left;
		NODE* right;

	};
	NODE* root;

public:
	BST();
	void displayAllAccounts(NODE* &r);
	void displayAllAccounts();	//Function overloading 

	void displayMyBalance(NODE* &r, int idNumber);
	void displayMyBalance(int idNumber);	//Function overloading 

	
	void depositMoney(NODE* &r, int idNumber, int money);
	void depositMoney(int idNumber, int money);		//Function overloading 

	void withdrawMoney(NODE* &r, int idNumber, int money);
	void withdrawMoney(int idNumber, int money);		//Function overloading 

	void closeMyAccount(NODE* &r, int idNumber);
	void closeMyAccount(int idNumber);		//Function overloading 

	void openNewAccount(NODE* &r, int idNumber, int money,string name);
	void openNewAccount(int idNumber, int money,string name);		//Function overloading 
	 
	void find(NODE* r, int &idNumber);
	void DeleteNode(NODE* &r, int data);
};

#endif // !BST_H

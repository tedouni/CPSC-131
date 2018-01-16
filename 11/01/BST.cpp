#include "BST.h"

BST::BST()
{
	root = NULL;
}


void BST::displayAllAccounts(NODE* &r)
{
	if (r!=NULL)
	{
		displayAllAccounts(r->left);
		cout << left;
		cout << r->IdN << setw(3) << " " <<setw(8)<< r->CName <<setw(4)<< "  $" << r->balance << endl;
		displayAllAccounts(r->right);
	}

}
void BST::displayAllAccounts()	//Function overloading 
{
	displayAllAccounts(root);
}
void BST::displayMyBalance(NODE* &r, int idNumber)
{

	if (r != NULL)
	{
		if (idNumber == r->IdN)
		{
			cout << r->CName << ", you have $" << r->balance << " in your account\n";
		}

		if (idNumber< r->IdN)
		{
			displayMyBalance(r->left, idNumber);
		}
		else
		{
			displayMyBalance(r->right, idNumber);
		}
	}
}
void BST::displayMyBalance(int idNumber)	//Function overloading 
{
	displayMyBalance(root, idNumber);

}

void BST::depositMoney(NODE* &r, int idNumber, int money)
{

	if (r!=NULL)
	{
		if (idNumber == r->IdN)
		{
			r->balance = r->balance + money;
		}

		if (idNumber< r->IdN)
		{
			depositMoney(r->left, idNumber, money);
		}
		else
		{
			depositMoney(r->right, idNumber, money);
		}
	}
}
void BST::depositMoney(int idNumber, int money)		//Function overloading 
{
	depositMoney(root, idNumber, money);		//Function overloading 

}
void BST::withdrawMoney(NODE* &r, int idNumber, int money)
{


	if (r != NULL)
	{
		if (idNumber == r->IdN)
		{
			r->balance = r->balance - money;
		}

		if (idNumber< r->IdN)
		{
			withdrawMoney(r->left, idNumber, money);
		}
		else
		{
			withdrawMoney(r->right, idNumber, money);
		}
	}
}
void BST::withdrawMoney(int idNumber, int money)		//Function overloading 
{
	withdrawMoney(root, idNumber, money);
}

void BST::find(NODE* r, int &idNumber)
{
	while (r->right !=NULL)
	{
		r = r->right;
	}

	idNumber = r->IdN;
}

void BST::closeMyAccount(NODE* &r, int idNumber)
{
	if (idNumber<r->IdN)
	{
		closeMyAccount(r->left, idNumber);
	}
	else if (idNumber>r->IdN)
	{
		closeMyAccount(r->right, idNumber);
	}

	else DeleteNode(r,idNumber); //idNumber found delete node
}
void BST::closeMyAccount(int idNumber)		//Function overloading 
{
	closeMyAccount(root, idNumber);
}
void BST::openNewAccount(NODE* &r, int idNumber, int money, string name)
{
	if (r==NULL)
	{
		r = new NODE;
		r->IdN = idNumber;
		r->balance = money;
		r->CName = name;
		r->left = NULL;
		r->right = NULL;

	}
	else if (idNumber<r->IdN)
	{
		openNewAccount(r->left, idNumber, money, name);
	}
	else
	{
		openNewAccount(r->right, idNumber, money, name);
	}
}
void BST::openNewAccount(int idNumber, int money, string name)		//Function overloading 
{
	openNewAccount(root, idNumber,  money, name);
}

void BST::DeleteNode(NODE* &r, int data)
{
	NODE * temp;
	temp = r;

	if (r->left==NULL)
	{
		r = r->right;
		delete r;
	}

	else  if (r->right == NULL)
	{
		r = r->left;
		delete r;
	}

	else
	{
		find(r->left, data);
		r->IdN = data;
		closeMyAccount(r->left, data);
	}
}

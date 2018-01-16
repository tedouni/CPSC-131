//
//  main.cpp
//  ProjectEightExOne
//
//  Created by Tayseer Edouni on 3/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "HashTable.h"

using namespace std;

void displayMenu();


int main(int argc, const char * argv[])
{

    fstream inputFile;
    inputFile.open("exone.txt",ios::in);
    
    HashTable<5> myBank;
    while (!inputFile.eof())
    {
        int id;
        string name;
        int balance;
        inputFile>>id;
        inputFile>>name;
        inputFile>>balance;
        myBank.insertTable(id,name,balance);
        
    }
    char continueProgram;
    do
    {
        displayMenu();
        char c;
        cin>>c;
        int idNumber;
        int money=0; //used for withdraw or deposit
        string name; //used for new account
        switch (c)
        {
            case 'a':
                myBank.DisplayAllAccounts();
                
                break;
                
            case 'b':
                cout<<"Enter your ID number: ";
                cin>>idNumber;
                myBank.showMyBalance(idNumber);
                break;
                
            case 'c':
                cout<<"Enter your ID number: ";
                cin>>idNumber;
                cout<<"How much would you like to deposit? ";
                cin>>money;
                myBank.deposit(idNumber, money);
                break;
                
            case 'd':
                cout<<"Enter your ID number: ";
                cin>>idNumber;
                cout<<"How much would you like to withdraw? ";
                cin>>money;
                myBank.withdraw(idNumber, money);
                break;
                
            case 'e':
                cout<<"Enter your ID number: ";
                cin>>idNumber;
                myBank.closeAccount(idNumber);
                break;
                
            case 'f':
                cout<<"Enter your name: ";
                cin>>name;
                myBank.openAccount(name);
                break;
            default:
                break;
        }
        cout<<"CONTINUE(y/n)? ";
        cin>>continueProgram;
    } while (continueProgram=='y');
    inputFile.close();
    return 0;
}

void displayMenu()
{
    cout<<"-------Bank of California-------------\n";
    cout<<"a.\tDisplay all accounts\n";
    cout<<"b.\tShow my balance\n";
    cout<<"c.\tDeposit\n";
    cout<<"d.\tWithdraw\n";
    cout<<"e.\tClose account\n";
    cout<<"f.\tOpen a new account\n\n";
    cout<<"Enter choice: ";
}



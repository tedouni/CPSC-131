//
//  HashTable.h
//  ProjectEightExOne
//
//  Created by Tayseer Edouni on 3/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __ProjectEightExOne__HashTable__
#define __ProjectEightExOne__HashTable__

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

template <int N>
class HashTable
{
private:
    struct NODE
    {
        int balance;
        string name;
        int idNumber;
        NODE *next;
    };
    NODE *HashArray[N];
    int avaliableIDs[3]={77,88,99}; //used for new accounts
    int indexForID;                 //index used for new accounts
    
    
public:
    HashTable()
    {
        for (int i=0; i<N; i++)
        {
            HashArray[i]=NULL;
        }
        
        indexForID=0;

    }
    int HashFun(int idNumber)
    {    return idNumber % 5;}
    
    void insertTable(int idn, string name, int balance)
    {
        int i=HashFun(idn);
        NODE *p = new NODE;
        p->name=name;
        p->balance=balance;
        p->idNumber=idn;
        p->next=HashArray[i];
        HashArray[i]=p;
    }
    
    void DisplayAllAccounts()
    {
        
        NODE *p;
        cout<<right<<"ID\tNAME\tBALANCE\n";
        
        for (int i=0; i<N; i++)
        {
            p=HashArray[i];
            
            while (p!=NULL)
            {
                cout<<right;
                cout<<p->idNumber<<"\t"<<p->name<<"\t"<<p->balance<<endl;
                p=p->next;
            }
        }
        cout<<endl;
    }
    
    void showMyBalance(int idNumber)
    {
        NODE *p=HashArray[HashFun(idNumber)];
        while (p->idNumber!=idNumber)
        {
            p=p->next;
        }
        cout<<p->name<<", you have "<<p->balance<<" in your account\n";
        
    }
    
    void deposit(int idN, int money)
    {
        NODE *p=HashArray[HashFun(idN)];
        p->balance=p->balance + money;
    }
    
    void withdraw(int idN, int money) //take money
    {
        NODE *p=HashArray[HashFun(idN)];
        p->balance-=money;
    }
    void closeAccount(int idNumber)
    {
        int i = HashFun(idNumber);
        NODE*p =HashArray[i];
        NODE*r=p;
        cout<<"Account number "<<idNumber<<" is now closed.\n";
        
        while (p->idNumber!=idNumber)
        {
            r=p;
            p=p->next;
        }
        
        if (p==HashArray[i])
        {
            HashArray[i]=p->next;
        }
        
        else
        {
            r->next=p->next;
            delete p;
        }
  
        
    }
    void openAccount(string name) //not sure what to do
    {
        
        NODE *p=new NODE;
        
        p->name=name;  //given
        p->balance=0;   //new account nothing
        int newID=avaliableIDs[indexForID];
        p->idNumber=newID;
        int i=HashFun(newID);
        p->next=HashArray[i];
        HashArray[i]=p;
        indexForID++;

    }
};

#include "HashTable.cpp"
#endif /* defined(__ProjectEightExOne__HashTable__) */

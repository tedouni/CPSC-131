//
//  HashTable.cpp
//  ProjectEightExOne
//
//  Created by Tayseer Edouni on 3/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//
/*
#include "HashTable.h"
template <int N>
HashTable<N>::HashTable()
{
    for (int i=0; i<N; i++)
    {
        HashArray[i]=NULL;
    }
    
}


template <int N>
int HashTable<N>::HashFun(int idNumber)
{
    return idNumber / 11;
}

template<int N>
void HashTable<N>::insertTable(int idNumber, string name, int balance)
{
    int i=HashFun(idNumber);
    NODE *p = new NODE;
    p->name=name;
    p->balance=balance;
    p->next=HashArray[i];
    HashArray[i]=p;
    
}

template<int N>
void HashTable<N>::DisplayAllAccounts()
{
    NODE *p;
    cout<<"ID   NAME    Balance\n";
    
    for (int i=1; i<N; i++)
    {
        p=HashArray[i];
        cout<<p->idNumber<<" "<<p->name<<" "<<p->Balance<<endl;

    }
}
    


template<int N>
void HashTable<N>::showMyBalance(int idNumber)
{
    
}

template<int N>
void HashTable<N>::deposit(int money)
{
    
}

template<int N>
void HashTable<N>::withdraw(int money) //take money
{
    
}

template<int N>
void HashTable<N>::closeAccount(int idNumber) //delete node
{
    
}

template<int N>
void HashTable<N>::openAccount() //not sure what to do
{
    
}

*/
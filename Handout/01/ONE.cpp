//
//  ONE.cpp
//  HandOutOne
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "ONE.h"


template<class T, int n>
void ONE<T,n>:: ReadData()
{
    for (int i=0; i<n; ++i)
    {
        cout<<"Enter a number:";
        cin>>a[i];
    }
}

template<class T, int n>
int ONE<T,n>::Total()
{
    T total=0;
    
    for (int i=0; i<n; ++i)
    {
        total+=a[i];
        
    }
    
    return total;
}

template<class T, int n>
void ONE <T,n>::Display()
{
    for (int i=0; i<n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

template<class T, int n>
void ONE<T,n> :: Average(T sum, float& ave)
{
    ave=sum/n;
}
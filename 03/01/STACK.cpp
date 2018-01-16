//
//  STACK.cpp
//  AssignmentThreePartOne
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "STACK.h"

template <class T, int n>
void STACK <T,n>::ClearStack( void )
{
    counter=0;
}

template <class T, int n>
bool STACK <T,n>::EmptyStack( void )
{
    return (counter==0)? true : false;
}

template <class T, int n>
bool STACK <T,n>:: FullStack( void )
{
    return (counter==n )? true:false;
}

template <class T, int n>
void STACK <T,n>:: Push( T x)
{
    a[counter]=x;
    counter++;
}

template <class T, int n>
T  STACK <T,n>:: Pop( void )
{
    counter--;
    return a[counter];
}

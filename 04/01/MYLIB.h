//
//  MYLIB.h
//  
//
//  Created by Tayseer Edouni on 2/17/14.
//
//

#ifndef _MYLIB_h
#define _MYLIB_h
#include <iostream>
using namespace std;

template < class T, int N >

class STACK
{
private:
    T a[N];
    int counter;
    
public:
    void StackClear();
    bool StackEmpty();
    bool StackFull();
    void StackPush(T x);
    T StackPop();
    
};


template < class T , int N >

void STACK <T, N> :: StackClear()
{
    counter=0;
}

template < class T , int N >

bool STACK <T, N> :: StackEmpty()
{
    return (counter ==0)? true : false ;
}

template < class T , int N >

bool STACK <T , N > :: StackFull()
{
    return (counter == N) ? true: false;
}

template < class T , int N >

void STACK <T , N> :: StackPush( T x)
{
    a[counter]= x;
    counter++;
}

template < class T , int N >

T STACK <T ,N > :: StackPop()
{
    counter--;
    return a[counter];
}
#endif

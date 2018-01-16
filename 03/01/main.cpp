//
//  main.cpp
//  AssignmentThreePartOne
//
//  Created by Tayseer Edouni on 2/9/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include "STACK.h"

using namespace std;

using namespace std;

int main( void )
{

    
    // To reverse a sentence
    
    STACK<char ,21> P;
    P.ClearStack();
    
    char x;
    
    cout<<"Enter a sentance: ";
    while (!P.FullStack())
    {
        cin.get(x);
        P.Push(x);
    }
    
    char r;
    
    cout<<"In reverse order: ";
    while (!P.EmptyStack()) {
        r=P.Pop();
        cout<<r;
    }
    cout<<endl;
    
    // To enter a group of scores
    
    STACK<int, 10> Scores;
    
    Scores.ClearStack();
    
    int x2=0;
    
    cout<<"Enter a group of scores with -1 at the end: ";
    
    do
    {
        cin>>x2;
        Scores.Push(x2);
        
    } while (x2!=-1);
    
    int r2;
    cout<<"In reverse order: ";
    while (!Scores.EmptyStack())
    {
        
        r2=Scores.Pop();
        if (r2!=-1) {
            cout<<r2<<" ";
        }
        
    }
     
    cout<<endl;
    
    //For days of the week
    
    STACK <string,7> DaysOfWeek;
    
    DaysOfWeek.ClearStack();
    
    cout<<"Enter a days of week: "; // Exactly as is on cover page "a days"
    
    string x3;
    
    while ( !DaysOfWeek.FullStack() )
    {
        cin>>x3;
        DaysOfWeek.Push( x3 );
        
    }
    
    cout << "In reverse order: ";
    
    string r3;
    
    while ( !DaysOfWeek.EmptyStack() )
    {
        r3=DaysOfWeek.Pop();
        cout<<r3<<" ";
    }
    
    cout<<endl;

    return 0;
}

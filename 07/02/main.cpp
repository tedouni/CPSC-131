//
//  main.cpp
//  AssignmentSevenExTwo
//
//  Created by Tayseer Edouni on 3/17/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "MYLIB.h"
using namespace std;


int main(int argc, const char * argv[])
{
    Functionfx<int> P;

    for (int i=0; i<4; ++i)
    {
        int x, y;
        cout<<"Enter the coefficient and the power of term "<<(i+1)<<" :";
        cin>>x>>y;
        P.pushQ(x, y);
        
    }
    
    P.display();
    int xValue;
    cout<<"Enter the X value: ";
    cin>>xValue;
    P.computeTotal(xValue);
    
    
    return 0;
}


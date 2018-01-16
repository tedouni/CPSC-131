//
//  ONE.h
//  HandOutOne
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __HandOutOne__ONE__
#define __HandOutOne__ONE__

#include <iostream>

using namespace std;

template<class T, int n>

class ONE
{
private: T a[n];
public:
    void ReadData();
    int Total();
    void Display();
    void Average(T sum, float& ave);
    
    
};


#endif /* defined(__HandOutOne__ONE__) */

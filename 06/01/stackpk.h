//
//  stackpk.h
//  AssignmentSix
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __AssignmentSix__stackpk__
#define __AssignmentSix__stackpk__

#include <iostream>
using namespace std;


class   stackpk
{
private:
    struct node
    {
        int info;
        node* next;
    };
    
    int counter;
    node* stack;
    
public:
    stackpk();
    
    void pushs(int x);
    
    bool Emptys();
    
    int pops();
    
    void display();
    
    void displayTotal();
    
    
};

#endif /* defined(__AssignmentSix__stackpk__) */

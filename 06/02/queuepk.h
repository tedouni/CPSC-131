//
//  queuepk.h
//  AssignmentSixExTwo
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __AssignmentSixExTwo__queuepk__
#define __AssignmentSixExTwo__queuepk__

#include <iostream>
using namespace std;


class queuepk
{
private:
    struct node
    {
        int info;
        node* next;
    };
    node *front, *rear;
    
public:
    queuepk();
    void pushq(int x);
    bool Emptyq();
    int pop();
    void display();
};

#endif /* defined(__AssignmentSixExTwo__queuepk__) */

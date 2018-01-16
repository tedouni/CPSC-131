//
//  main.cpp
//  AssignmentSixExTwo
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "queuepk.h"

int main(int argc, const char * argv[])
{

    queuepk que;
    que.pushq(3);
    que.pushq(9);
    que.pushq(8);
    que.pushq(1);

    //PART ONE & TWO
    que.display();
    
    return 0;
}


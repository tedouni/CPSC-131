//
//  main.cpp
//  AssignmentSix
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "stackpk.h"
int main(void)
{
    
    stackpk s;
    
    s.pushs(3);
    s.pushs(9);
    s.pushs(8);
    s.pushs(5);
    s.pushs(7);

    //PART ONE & PART THREE
    
    s.display();
    
    //PART TWO
    
    s.displayTotal();
    

    return 0;
}


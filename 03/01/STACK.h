//
//  STACK.h
//  AssignmentThreePartOne
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#ifndef __AssignmentThreePartOne__STACK__
#define __AssignmentThreePartOne__STACK__

#include <iostream>
#include <string>

template <class T, int n>

class STACK {
private: T a[ n ];
    int counter;
    
public:
    void ClearStack( void );
    bool EmptyStack( void );
    bool FullStack( void ) ;
    void Push( T x);
    T Pop( void );
    
};


#endif /* defined(__AssignmentThreePartOne__STACK__) */

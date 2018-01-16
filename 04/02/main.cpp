//
//  main.cpp
//  ProjectFourProblemTwo
//
//  Created by Tayseer Edouni on 2/17/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "MYLIB.h" // see problem one for source code


int main(void)
{
    char cont;
    do{
        
        
        char p;
        int x, y, r;
        int a,b,c;
        
        
        cout<<"Enter the value of a,b,c: ";
        cin>>a>>b>>c;
        cout<<"Enter a post fix expression:";
        
        STACK< char, 30 > S;
        S.StackClear();
        
        while (cin >> p , p != '$' )
        {
            switch (p)
            {
                case 'a':
                    S.StackPush(a);
                    break;
                case 'b':
                    S.StackPush(b);
                    break;
                case 'c':
                    S.StackPush(c);
                    break;
                case '+':
                    x=S.StackPop();
                    y=S.StackPop();
                    r=y+x;
                    S.StackPush(r);
                    break;
                case '*':
                    x=S.StackPop();
                    y=S.StackPop();
                    r=y*x;
                    S.StackPush(r);
                    break;
                case '-':
                    x=S.StackPop();
                    y=S.StackPop();
                    r=y-x;
                    S.StackPush(r);
                    break;
                case '/':
                    x=S.StackPop();
                    y=S.StackPop();
                    r=y/x;
                    S.StackPush(r);
                    break;
                    
                default:
                    break;
            }
        }
        
        
        r=S.StackPop();
        cout<<endl;
        cout<<endl;
        if (S.StackEmpty())
        {
            cout<<"The exp. Value=: "<<r<<endl;
        }
        else
            cout<<"wrong expression \n";
        
        cout<<"Continue (Y/N): "<<endl;
        cin>>cont;

    }
        while (cont == 'Y');
    
    return 0;
}


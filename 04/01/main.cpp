//
//  main.cpp
//  AssignmentFourExOne
//
//  Created by Tayseer Edouni on 2/16/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//  Project No.4 Problem One


//This program depends on the user entering $ to end a phrase.

#include <iostream>
#include "MYLIB.h"
#include <locale.h> //used for tolower

int main(void)
{
     
    char choice;
    char a;

    
    do
    {
        int testCounterOne=0,testCounterTwo=0;  //Should be equal to stack size in this case 24
        STACK <char, 30> stackOne; //STACK ONE AKA Left to Right
        stackOne.StackClear();
        
        STACK <char, 30> tempStack; //TEMP
        tempStack.StackClear();
        
        STACK <char, 30> stackTwo; //Reversed STACK AKA Right to Left
        stackTwo.StackClear();


        cout<<"Enter a phrase: ";
        
        while ( cin>>a && a!= '$')  //loop one to create Stack ONE and TEMP
        {
            stackOne.StackPush(a);
            tempStack.StackPush(a);
            testCounterOne++;

        }
        
        while (!tempStack.StackEmpty()) //create reverses stack
        {
            char p =tempStack.StackPop();
            
            stackTwo.StackPush(p);
            
        }
        
        while (!stackOne.StackEmpty() && !stackTwo.StackEmpty()) //test to see if char match
        {
            char p = stackOne.StackPop();
            p = tolower(p);                                     //used to convert uppercase to lower
            char c = stackTwo.StackPop();
            c = tolower(c);                                     //used to convert uppercase to lower
            
            if (p==c)
                testCounterTwo++;
            
        }
        
    
        if (testCounterTwo==testCounterOne)
            cout<<"This statement is a PALINDROME "<<endl;
        else
            cout<<"This statement is NOT a PALINDROME\n";
        
        cout<<endl;
        cout<<"Continue (y/n)? ";
        cin>>choice;
        cout<<endl;
        cout<<endl;
        
    } while (choice == 'y' );
    
    
    return 0;
}


//
//  stackpk.cpp
//  AssignmentSix
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "stackpk.h"


stackpk::stackpk()
{
    stack=NULL;
    counter=0;

}

void stackpk::pushs(int x)
{
    
    node *p=new node;
    p->info=x;
    if (stack==NULL)
    {
        p->next=NULL;
        stack=p;
    }
    else
    {
        p->next=stack;
        stack=p;
    }
    
}

bool stackpk::Emptys()
{
    return (stack==NULL)? true: false;

}

int stackpk::pops()
{
    node *p=stack;
    int x;
    
    x=p->info;
    stack=p->next;
    delete p;
    
    return x;
    
}

void stackpk::display()
{
    node *p=stack;
    
    cout<<"stack-->";
    while (p!=NULL)
    {
        cout<<p->info<<"-->";
        counter++;
        p=p->next;
    }
    cout<<"NULL\n\n";
    cout<<"There are "<<counter<<" nodes in this linked list\n\n";
}

void stackpk::displayTotal()
{
    node *p=stack;
    
    int total=0;
    
    while (p!=NULL)
    {
        total+=p->info;
        p=p->next;
    }
    
    cout<<"The total of all of the nodes is: "<<total<<endl<<endl;
}


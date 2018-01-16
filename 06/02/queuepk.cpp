//
//  queuepk.cpp
//  AssignmentSixExTwo
//
//  Created by Tayseer Edouni on 3/11/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include "queuepk.h"

queuepk::queuepk()
{
    front=NULL;
    rear=NULL;
    
}

void queuepk::pushq(int x)  //add to the rear of a queue
{
    node *p;
    p=new node;
    p->info=x;
    p->next=NULL;
    
    if (front==NULL)
    {
        front=p;
        rear=p;
    }
    
    else
    {
        rear->next=p;
        rear=p;
    }
    
    
}

bool queuepk::Emptyq()
{
    return (front==NULL)?true:false;
}

int queuepk::pop() //want to pop front
{
    node *p=front;
    int x;
    
    x=front->info;
    front=front->next;
    delete p;
    return x;
    
}

void queuepk::display()
{
    node *p=front;
    
    int max=front->info;
    int min=front->info;
    
    cout<<"que-->";
    while (p!=NULL)
    {
        
        if (max<p->info)
            max=p->info;
        
        if(min>p->info)
            min=p->info;
        
        cout<<p->info<<"-->";
        p=p->next;
        
    }
    cout<<"NULL\n\n";
    
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
}
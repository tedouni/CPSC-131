//
//  main.cpp
//  ProjectFive
//
//  Created by Tayseer Edouni on 2/25/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct NODE
{
    int age;
    float gpa;
    NODE *next;
};

int main(void)
{
    NODE *list;
    NODE *p;
    
    list= NULL;
    
    for (int i=1; i<5; ++i)
    {
        p= new NODE;
        cout<<"Enter age and gpa:";
        cin>>p->age>>p->gpa;
        
        p->next = list;
        list =p;
    }
    
    cout<<endl;
    
    cout<<"AGE\tGPA\n";
    
    while (p!= NULL)
    {
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<p->age<<"\t"<<p->gpa<<endl;
        p=p->next;
    }
        return 0;
}

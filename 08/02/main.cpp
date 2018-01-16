//
//  main.cpp
//  ProjectEightExTwo
//
//  Created by Tayseer Edouni on 3/23/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Person
{
    string name;
    int age;
    float gpa;
};


void display(Person p[],int arraySize);
int main(int argc, const char * argv[])
{
    int arraySize;
    
    fstream inputFile;
    inputFile.open("word.txt",ios::in);
    
    inputFile>>arraySize;
    
    //Part one create dynamic array p of Person type.
    Person *p;
    p=new Person[arraySize];
    
    //part two copy data from the file into array p
    int i=0;
    while (!inputFile.eof())
    {
        inputFile>>p[i].name;
        inputFile>>p[i].age;
        inputFile>>p[i].gpa;
        i++;
    }
    inputFile.close();
    
    //Display array P
    display(p, arraySize);
  

    return 0;
}

void display(Person p[],int arraySize)
{
    cout<<right;
    cout<<" NAME   AGE GPA\n";
    cout<<"----------------\n";
    double totalAge=0, totalGPA=0;
    for (int i=0; i<arraySize; ++i)
    {
        cout<<setw(6);
        cout<<p[i].name<<"  "<<p[i].age<<"  "<<p[i].gpa<<endl;
        totalAge+=p[i].age;
        totalGPA+=p[i].gpa;
    }
    cout<<endl;
    cout<<"Average age= "<<totalAge/arraySize<<endl;
    cout<<"Average GPA= "<<totalGPA/arraySize<<endl;
    
}

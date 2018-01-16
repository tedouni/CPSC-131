//
//  main.cpp
//  HandOutTwoPartTwo
//
//  Created by Tayseer Edouni on 2/6/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(void)
{
    char Name;
    float gpa;
    int age;
    
    fstream f;
    f.open("/Users/troy/Desktop/Xcode/CPSC131/Data.txt",ios::in);
    
    f.getline(&Name,20,'/');
    f>>age>>gpa;
    
    cout<<Name<<endl;
    cout<<age<<endl;
    cout<<gpa<<endl;
    return 0;
}


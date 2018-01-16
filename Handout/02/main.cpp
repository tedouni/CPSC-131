//
//  main.cpp
//  HandOutTwo
//
//  Created by Tayseer Edouni on 2/6/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int N=5;

//For Known N Records
void Copy1(string fname, int x[])
{
    ifstream f;
    f.open(fname);
    for (int i=0; i<N; ++i)
    {
        f>>x[i];
    }
    f.close();
}

//For unknown N Records Method I
void Copy2(string fname,int x[])
{
    fstream f;
    f.open(fname,ios::in);
    int i=0;
    while (true)
    {
        f>>x[i];
        if (f.fail())
            break;
        ++i;
    }
    N=i;
    f.close();
}

//For unkown N Records Method II

void Copy3(string fname, int x[])
{
    fstream f;
    f.open(fname, ios::in);
    int i=0;
    
    f>>x[i];
    while (!f.eof())
    {
        ++i;
        f>>x[i];
        
    }
    N=i;
    f.close();
}

void Display(int x[])
{
    for (int i=0; i<N; ++i)
    {
        cout<<x[i]<<" ";
    
    }
    cout<<endl;
}
int main(int argc, const char * argv[])
{

    
    
    return 0;
}


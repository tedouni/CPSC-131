//
//  main.cpp
//  HandOutOne
//
//  Created by Tayseer Edouni on 2/6/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "ONE.h"
using namespace std;



int main(void)
{

    ONE<int, 7> p;
    p.ReadData();
    p.Display();
    int sumAll=p.Total();
    float averageAll;
    p.Average(sumAll, averageAll);
    cout<<"Average="<<averageAll<<endl;
    system("pause");
    
    return 0;
}

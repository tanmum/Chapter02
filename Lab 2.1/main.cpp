//
//  main.cpp
//  Lab 2.1
//
//  Created by Tan Bui on 4/1/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "String.h"
using namespace std;

int main(int argc, const char * argv[])
{
    String s(10);
    s.setTo("Hello every body in the world!");
    cout<<s.getStr()<<endl;
    
    //std::cin.ignore();
    return 0;
}


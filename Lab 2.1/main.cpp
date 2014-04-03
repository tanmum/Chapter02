//
//  main.cpp
//  Lab 2.1
//
//  Created by Tan Bui on 4/1/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "customer.h"
#include "String.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Customer odc("ODC", "", "515-779-5434","515-799-5432");
    //odc.setFax("nothing at all");
    odc.showCard();
    //std::cin.ignore();
    return 0;
}


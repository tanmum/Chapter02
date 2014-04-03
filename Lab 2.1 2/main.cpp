//
//  main.cpp
//  Lab 2.1
//
//  Created by Tan Bui on 4/1/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "customer.h"

int main(int argc, const char * argv[])
{
    Customer odc;
    odc.setName("ODC");
    odc.setPhone("515-779-5434");
    odc.setFax("nothing at all hic hic hu hu");
    odc.showCard();
    std::cin.ignore();
    return 0;
}


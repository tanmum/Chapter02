//
//  Customer.cpp
//  Chapter02
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "Customer.h"
#include "String.h"


Customer::Customer(char* nm, char* addr, char* ph, char* fx)
{
    setName(nm);
    setAddress(addr);
    setPhone(ph);
    setFax(fx);
}

void Customer::setName(char * nm)
{
    name.setTo(nm);
}
void Customer::setAddress(char * addr)
{
    address.setTo(addr);
}
void Customer::setPhone(char * ph)
{
    phone.setTo(ph);
}
void Customer::setFax(char * fx)
{
    fax.setTo(fx);
}
char* Customer::getName()
{
    return name.getStr();
}
void Customer::showCard()
{
    name.prt(std::cout << "Customer: "); std::cout << std::endl;
    phone.prt(std::cout << "Phone: "); std::cout << std::endl;
    fax.prt(std::cout << "Fax: "); std::cout << std::endl;
}
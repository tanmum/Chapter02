//
//  customer.cpp
//  Lab 2.1
//
//  Created by Tan Bui on 4/1/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "customer.h"

char* Customer::setString(char *to, char *from, int length)
{
    if (!to || !from || length < 1) {
        return NULL;
    }
    
    int i = 0;
    while ((*to++ = *from++)) {
        if (++i == length - 1) {
            *--to = 0;
            break;
        }
    }
    return to;
}
void Customer::clear(char * str, int length)
{
    if (str) {
        for (int i = 0; i < length; i++) {
            str[i] = 0;
        }
    }
}
void Customer::initString(char *to, char *from, int length)
{
    if (!to) {
        return;
    }
    if (from) {
        setString(to, from, length);
    } else {
        clear(to, length);
    }
}

Customer::Customer()
{
    Customer(NULL);
}
Customer::Customer(char* rm)
{
    Customer(rm, NULL);
}
Customer::Customer(char* rm, char* addr)
{
    Customer(rm, addr, NULL, NULL);
}
Customer::Customer(char* nm, char* addr, char* ph, char* fx)
{
    initString(name, nm, 20);
    initString(address, addr, 55);
    initString(phone, ph, 16);
    initString(fax, fx, 16);
}

void Customer::setName(char * nm)
{
    setString(name, nm, 20);
}
void Customer::setAddress(char * addr)
{
    setString(address, addr, 55);
}
void Customer::setPhone(char * ph)
{
    setString(phone, ph, 16);
}
void Customer::setFax(char * fx)
{
    setString(fax, fx, 16);
}
char* Customer::getName()
{
    return name;
}
void Customer::showCard()
{
    std::cout
    << "Customer: " << name << std::endl
    << "Phone : " << phone << std::endl
    << "Fax: " << fax << std::endl;
}
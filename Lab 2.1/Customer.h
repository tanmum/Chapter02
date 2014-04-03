//
//  Customer.h
//  Chapter02
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Chapter02_Customer_h
#define Chapter02_Customer_h
#include "String.h"

class Customer
{
    String name;
    String address;
    String phone;
    String fax;
    
private:
        
public:
    Customer(char* nm, char* addr, char* ph, char* fx);
    
    void setName(char*);
    void setAddress(char*);
    void setPhone(char*);
    void setFax(char*);
    
    char* getName();
    void showCard();
};

#endif

//
//  customer.h
//  Lab 2.1
//
//  Created by Tan Bui on 4/1/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_2_1_customer_h
#define Lab_2_1_customer_h

class Customer
{
    char name[20];
    char address[55];
    char phone[16];
    char fax[16];
    
private:
    char* setString(char* to, char* from, int length);
    void initString(char* to, char* from, int length);
    void clear(char*, int);
    
public:
    Customer();
    Customer(char* nm);
    Customer(char* nm, char* addr);
    Customer(char* nm, char* addr, char* ph, char* fx);
    
    void setName(char*);
    void setAddress(char*);
    void setPhone(char*);
    void setFax(char*);
    
    char* getName();
    void showCard();
};

#endif

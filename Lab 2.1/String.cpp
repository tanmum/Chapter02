//
//  String.cpp
//  Lab 2.1
//
//  Created by Tan Bui on 4/2/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "String.h"
#include <iostream>

String::String()
{
    s = NULL;
    length = 0;
}

String::String(long n)
{
    if (n < 0) {
        n = NULL;
        length = 0;
        return;
    }
    s = new char[length = n + 1];
    for (int i = 0; i < length; i++) {
        s[i] = 0;
    }
}

String::String(char* s) : String()
{
    setTo(s);
}

char* String::getStr()
{
    return s;
}

void String::setTo(char * s)
{
    if (!s && !this->s) {
        return;
    }
    
    int inputLength = 0;
    if (s) {
        for (; *(s+inputLength); inputLength++);// now you have the length of the inputstring,
    }
    
    if (this->s) {
        if (inputLength < length) {
            // ok just clear and reuse
            for (int i = 0; i < length; i++) {
                this->s[i] = 0;
            }
        } else { // it means there's not enough space to contains new string
            // you have to reallocate
            delete [] this->s;
            this->s = NULL;
            length = inputLength + 1; // length will be the size we gonna have to allocate to this->s to contain enough the inputstring ==> total length = inputstring's length + 1 for null-terminated character
            this->s = new char[length];
        }
    } else { // allocate
        length = inputLength + 1; // length will be the size we gonna have to allocate to this->s to contain enough the inputstring ==> total length = inputstring's length + 1 for null-terminated character
        this->s = new char[length];
    }
    
    for (int i = 0; i < inputLength; i++) {
        this->s[i] = s[i];
    }
    this->s[inputLength] = 0;
}




//
//  String.h
//  Lab 2.1
//
//  Created by Tan Bui on 4/2/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_2_1_String_h
#define Lab_2_1_String_h

class String
{
private:
    char* s;
    long length;
    
public:
    String();
    String(long);
    String(char*);
    
    void setTo(char*);
    char* getStr();
    long ln();
    void clear();
    
private:
    void create(long);
};

#endif

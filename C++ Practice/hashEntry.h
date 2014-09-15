//
//  hashEntry.h
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#ifndef __C___Practice__hashEntry__
#define __C___Practice__hashEntry__
//a class to instantiate objects to be placed at specific keys of the hashTable in the form of tuples
#include <iostream>

using namespace std;

class hashEntry{
    string key;
    int value = 0;
public:
    hashEntry(string k, double v){
        this->key = k;
        this->value = v;
    };
    int getValue(){
        return value;
    };
    string getKey(){
        return key;
    }
};

#endif /* defined(__C___Practice__hashEntry__) */

//
//  hashTable.h
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#ifndef __C___Practice__hashTable__
#define __C___Practice__hashTable__

#include <iostream>
#include <vector>
#include "hashEntry.h"


using namespace std;

class hashTable {
    int limit = 8; // set size equal to 8 initially, to be resized later if necess for natural resizing
    hashEntry **storage;
    int count = 0;
    int hash(float key);
    int hash(string key);
public:
    hashTable();
    void resize(int newLimit);
    void insert(string key, double value);
    double getValue(string key);
    double remove(string key);
    int getSize();
    int getCount();
    void printItems();
};



#endif /* defined(__C___Practice__hashTable__) */

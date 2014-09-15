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
#include "hashEntry.h"


using namespace std;

class hashTable {
    int _limit; // set size equal to 8 initially, to be resized later if necess for natural resizing
    float *storage;
public:
    hashTable();
    void resize(int newLimit);
    void addItem(string key, double value);
    double removeItem(string key);
};

int hash(float key);//declared separately but inside hash file for convenience and organization
int hash(string key);

#endif /* defined(__C___Practice__hashTable__) */

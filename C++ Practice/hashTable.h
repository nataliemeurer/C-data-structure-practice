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
    int limit = 8; // set size equal to 8 initially for natural resizing
    
    
};

int hash(float Key);//declared separately but inside hash file for convenience and organization
int hash(string Key);

#endif /* defined(__C___Practice__hashTable__) */

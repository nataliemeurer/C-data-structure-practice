//
//  hashTable.cpp
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#include "hashTable.h"

hashTable::hashTable(){
    storage = new float [_limit];
};

void hashTable::resize(int newLimit){
    
};

void hashTable::addItem(string key, double value){

};

double hashTable::removeItem(string key){
    return 1;
};

int hash(float key){
    return key;
};
int hash(string key){
    return 1;
};
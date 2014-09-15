//
//  hashTable.cpp
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#include "hashTable.h"

hashTable::hashTable(){
    storage = new hashEntry*[limit];
    for ( int i = 0; i < limit; i++){
        storage[i] = NULL;
    }
};

void hashTable::resize(int newLimit){
    int oldLimit = limit;
    hashEntry *oldStorage[limit];
    for ( int j = 0; j < limit; j++){
        oldStorage[j] = storage[j];
    }
    limit *= 2;
    count = 0;
    storage = new hashEntry*[limit];
    for ( int i = 0; i < oldLimit; i++){
        if ( oldStorage[i] != NULL ){
            insert( oldStorage[i]->getKey(), oldStorage[i]->getValue() );
        }
    }
};

void hashTable::insert(string key, double value){
    if( count >= (.75 * limit)){
        resize(limit * 2);
    }
    int idx = hash(key);
    hashEntry *newHash = new hashEntry(key, value);
    if ( storage[idx] == NULL ){
        storage[idx] = newHash;
    } else {
        resize(limit * 2);
        insert(key, value);
    }
    count++;
};

double hashTable::remove(string key){
    if( count <= (.25 * limit)){
        resize(limit * 2);
    }
    int idx = this->hash(key);
    double removed = storage[idx]->getValue();
    storage[idx] = NULL;
    count--;
    return removed;
};

int hashTable::hash(float key){
    return static_cast<int>(key) % limit;
};

int hashTable::hash(string key){
    int total = 0;
    for ( int i = 0; i < key.length(); i++){
        total += key.at(i);
    }
    int idx = total % limit;
    return idx;
};

double hashTable::getValue(string key){
    int idx = hash(key);
    return storage[idx]->getValue();
}

int hashTable::getSize(){
    return limit;
};

int hashTable::getCount(){
    return count;
};

void hashTable::printItems(){
    for ( int i = 0 ; i < limit; i++ ){
        if (storage[i] != NULL){
            cout << "Key: " << storage[i]->getKey() << "  Value: " << storage[i]->getValue() << endl;
        }
    }
};


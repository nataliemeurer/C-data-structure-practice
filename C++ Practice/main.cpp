//
//  main.cpp
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#include <iostream>
#include "linkedList.h"
#include "hashTable.h"

using namespace std;

int main(int argc, const char * argv[])
{
    linkedList myList = *new linkedList();
    myList.addHead("hello");
    myList.addTail("Kevin");
    
    hashTable myHash = *new hashTable();
    myHash.insert("Riley", 25);
    myHash.insert("Kevin", 20);
    myHash.remove("Kevin");
    myHash.insert("something", 509.1);
    cout << "value of Riley is " << myHash.getValue("Riley")<<endl;
    myHash.printItems();
    return 0;
}
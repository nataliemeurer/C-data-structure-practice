//
//  linkedList.h
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#ifndef __C___Practice__linkedList__
#define __C___Practice__linkedList__

#include <iostream>
#include "node.h"

class linkedList{
    int size;
    node *current;
public:
    node *head;
    node *tail;
    linkedList();
    void addHead(string val);
    void addTail(string val);
    string removeHead();
    string removeTail();
    bool contains();
};

#endif /* defined(__C___Practice__linkedList__) */

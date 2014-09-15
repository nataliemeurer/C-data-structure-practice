//
//  node.h
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#ifndef __C___Practice__node__
#define __C___Practice__node__

#include <iostream>

using namespace std;

class node{
public:
    string value;
    node *next;
    node *prev;
    node();
    node(float val);//to be converted to a string for storage
    node(string val);
};

#endif /* defined(__C___Practice__node__) */

//
//  node.cpp
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#include "node.h"

node::node(){
    
};

node::node(float val){
    value = to_string(val);
    next = NULL;
    prev = NULL;
};//to be converted to a string for storage

node::node(string val){
    next = NULL;
    prev = NULL;
    value = val;
};
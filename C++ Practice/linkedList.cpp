//
//  linkedList.cpp
//  C++ Practice
//
//  Created by Kevin Meurer on 9/14/14.
//  Copyright (c) 2014 Kevin Meurer. All rights reserved.
//

#include "linkedList.h"

linkedList::linkedList(){
    head = NULL;
    tail = NULL;
    current = NULL;
    size = 0;
}

void linkedList::addHead(string val){
    node *newNode = new node(val);
    if ( size == 0 ){
        this->head = newNode;
        this->tail = newNode;
    } else {
        newNode->next = this->head;
        newNode->prev = NULL;
        this->head->next = newNode;
        this->head = newNode;
    }
    size++;
};

void linkedList::addTail(string val){
    node *newNode = new node(val);
    if ( size == 0 ){
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = this->tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    size++;
};

string linkedList::removeHead(){
    
};

string linkedList::removeTail(){
    
};

bool linkedList::contains(){
    forreturn true;
};

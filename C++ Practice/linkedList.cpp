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
    if ( size == 0 ){
        throw("cannot remove item from an empty list");
    } else {
        node *removed = this->head;
        delete &head;
        removed->next->prev = NULL;
        head = removed->next;
        return removed->value;
    }
};

string linkedList::removeTail(){
    if ( size == 0 ){
        throw("cannot remove item from an empty list");
    } else {
        node *removed = this->tail;
        delete &tail;
        removed->prev->next = NULL;
        tail = removed->prev;
        return removed->value;
    }

};

bool linkedList::contains(){
    return true;
};

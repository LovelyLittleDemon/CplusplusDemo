//
// Created by sensetime on 19-4-16.
//
#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include "template.h"

using namespace std;

template <class T, int num>
Stack<T, num>::Stack() {
    this->point = 0;
}

template <class T, int num>
bool Stack<T, num>::clear() {
    if(this->point == 0){
        return true;
    }
    this->point = 0;
    memset(content, 0, sizeof(T) * num);
}

template <class T, int num>
bool Stack<T, num>::push(const T &t) {
    if(this->point >= num -1){
        return false;
    }
    content[this->point] = t;
    this->point++;
}

template <class T, int num>
int Stack<T, num>::size() {
    return this->point;
}

template <class T, int num>
bool Stack<T, num>::pop(T &t) {
    if(this->point == 0){
        return false;
    }
    t = content[point - 1];
    this->point--;
    memset(content + (point -1), 0 , sizeof(T));
    return true;
}


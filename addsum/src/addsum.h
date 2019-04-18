//
// Created by sensetime on 19-4-15.
//
#pragma once

#include <vector>
#include <string>
#include <string.h>
#include <sstream>

using namespace std;
template <class T>
struct IndexInfo{
    int index1;
    int value1;
    int index2;
    int value2;
    string info2string(){
        stringstream ss;
        ss<<"index: "<<index1<<" "<<index2 <<" value: "<<value1<<" "<<value2;
        return ss.str();
    };
};

template <typename T>
bool findPair(T* array, int len, T target, vector<IndexInfo<T>>& out);




//
// Created by sensetime on 19-4-15.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "addsum.h"

using namespace std;
//
template <typename T>
bool findPair(T* array, int len, T target, vector<IndexInfo<T>>& out){
    if(array == nullptr || len == 0){
        return false;
    }
    map<T, int> baseMap;
    for(int i = 0; i < len; i++){
        T sub = target - array[i];
        if(baseMap.find(sub) != baseMap.end()){
            IndexInfo<T> info;
            info.index1 = baseMap[sub];
            info.index2 = i;
            info.value1 = sub;
            info.value2 = array[i];
            out.push_back(std::move(info));
            return true;
        }
        baseMap[array[i]] = i;
    }
    return false;
}
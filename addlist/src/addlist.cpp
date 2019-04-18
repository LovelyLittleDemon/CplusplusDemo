//
// Created by sensetime on 19-4-12.
//
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include "addlist.h"

using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    if(!l1 && !l2){
        return nullptr;
    }
    ListNode* dst = nullptr;
    ListNode* current = nullptr;
    ListNode* l11 = l1;
    ListNode* l22 = l2;

    int addHight = 0;
    while(l11 || l22){
        int a1 = (l11 == nullptr? 0 : l11->val);
        int a2 = (l22 == nullptr? 0 : l22->val);
        int sub = (a1 + a2 + addHight) % 10;
        addHight = (a1 + a2)/10;
        ListNode* node = new ListNode(sub);
        if(current != nullptr){
            current->next = node;
        }
        current = node;
        if(dst == nullptr){
            dst = current;
        }
        l11 = l11 == nullptr ? nullptr : l11->next;
        l22 = l22 == nullptr ? nullptr : l22->next;
        if(l11 == nullptr && l22 == nullptr){
            if(addHight > 0){
                ListNode* node = new ListNode(addHight);
                current->next = node;
            }
        }
    }
    return dst;
}

ListNode* fromArray(const int* array, const int len){
    if(array == nullptr || len == 0){
        return nullptr ;
    }
    ListNode* previous = nullptr;
    ListNode* out = nullptr;
    for(int i = 0; i < len; i++){
        ListNode* node = new ListNode(array[i]);
        if(previous != nullptr){
            previous->next = node;
        }
        if(out == nullptr){
            out = node;
        }
        previous = node;
    }
    previous = nullptr;
    return out;
}

string fromInt(int a){
    stringstream ss;
    ss<<a;
    string dst = ss.str();
    return dst;
}

char* list2String(const ListNode* l1){
    if(l1 == nullptr){
        return nullptr;
    }
    ListNode* current = const_cast<ListNode*>(l1);
    string dst = fromInt(l1->val);
    while (current->next){
        dst += "->" + fromInt(current->next->val);
        current = current->next;
    }
    char* ret = (char *)malloc(dst.size() * sizeof(char));
    std::copy(dst.begin(), dst.end(), ret);
    return ret;
}

ListNode* reverse(const ListNode* src){
    if(src == nullptr){
        return nullptr;
    }
    ListNode* phead = const_cast<ListNode*>(src);
    ListNode* pCurrent = phead->next;
    ListNode* pPre = phead;
    ListNode* pNext = nullptr;
    while(pCurrent){
        pNext = pCurrent->next;
        pCurrent->next = pPre;
        pPre = pCurrent;
        pCurrent = pNext;
    }
    phead->next = nullptr;
    return pPre;
}

void release(ListNode* l){
    if(!l){
        return;
    }
    ListNode* current = l;
    ListNode* next;
    while(current){
        next = current->next;
        delete current;
        current = next;
    }
    delete(l);
}
//
// Created by sensetime on 19-4-12.
//

#ifndef LEETCODE_ADDLIST_H
#define LEETCODE_ADDLIST_H

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int t) : val(t), next(nullptr){};
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

ListNode* fromArray(const int* array, const int len);

char* list2String(const ListNode* l1);

void release(ListNode* l);

ListNode* reverse(const ListNode* src);

#endif //LEETCODE_ADDLIST_H

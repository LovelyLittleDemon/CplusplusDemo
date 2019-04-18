#include <iostream>
#include "addlist.h"

using namespace std;

int main() {

    int a1[] = {7, 4, 3};
    int a2[] = {5, 2, 4, 8};
    cout<<"line."<<__LINE__<<" size a1: "<<sizeof(a1)/ sizeof(int)<<endl;
    ListNode* l1 = fromArray(a1, sizeof(a1)/ sizeof(int));
    cout<<"l1: "<<list2String(l1)<<endl;
    l1 = reverse(l1);
    cout<<"l1 reverse: "<<list2String(l1)<<endl;
    ListNode* l2 = fromArray(a2, sizeof(a1)/ sizeof(int));
    cout<<"l2: "<<list2String(l2)<<endl;
    ListNode* dst = addTwoNumbers(l1, l2);
    cout<<"dst: "<<list2String(dst)<<endl;
    release(l1);
    release(l2);
    release(dst);
    return 0;
}
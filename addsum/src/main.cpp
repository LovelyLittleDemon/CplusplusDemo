#include <iostream>
#include "addsum.h"
#include "addsum.cpp"
#include "template_test.h"
#include "template.cpp"

using namespace std;

int main() {
    showMsg<MotoHelp,MotoHelp>();
    Stack<int, 5> stack;
    stack.push(5);
    int size = stack.size();
    for(int i = 0; i<size; i++){
        int ret = 0;
        bool issuccess = stack.pop(ret);
        cout<<"index."<<i<<": "<<issuccess<<" "<<ret<<endl;
    }
    int array[] = {5, 2, 4 ,8, 4, 6};
    vector<IndexInfo<int>> out;
    int target = 10;
    bool isFind = findPair<int>(array, (sizeof(array)/ sizeof(int)),target, out);
    cout<<"isFind: "<< isFind  <<endl;
    if(isFind){
        for(int i = 0; i < out.size();i++){
            cout<<"Target: "<<target<<" "<<out[i].info2string()<<endl;
        }
    }
}
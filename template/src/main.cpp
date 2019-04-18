#include <iostream>
#include "template.h"
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
}
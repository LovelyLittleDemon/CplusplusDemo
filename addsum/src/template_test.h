//
// Created by sensetime on 19-4-16.
//

#ifndef LEETCODE_TEMPLATE_TEST_H
#define LEETCODE_TEMPLATE_TEST_H

#include <iostream>

using namespace std;

template <class T, int num>
class Stack{
private:
    T content[num];
    int point;
public:
    Stack();
    bool isEmpty();
    bool push(const T& t);
    bool pop(T& t);
    int size();
    bool clear();
};

//template <class Creator, class Destory, int num = 1>
class MotoHelp{
public :
    int operator()(char* name, int id){
        cout<<"line."<<__LINE__<<" name: "<<name<<" id: " <<id<<endl;
        return 1;
    }
    int operator()(){
        cout<<"line."<<__LINE__<<" release!"<<endl;
        return 0;
    }

    int show(){
        cout<<"show"<<endl;
    }
};



template<class Creator, class Destroyer>
void showMsg(){
    Creator creator;
    Destroyer destroyer;
    int res = creator("May", 007);
    creator.show();
    cout<<"create res: "<<res<<endl;
    res = destroyer();
    cout<<"release res: "<<res<<endl;
}



#endif //LEETCODE_TEMPLATE_TEST_H

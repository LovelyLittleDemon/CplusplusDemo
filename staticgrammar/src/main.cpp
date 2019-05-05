//
// Created by sensetime on 19-4-28.
//

#include <iostream>
#include "static_grammar.h"
using namespace std;

void show(){
//    PRODUCT_NAME = "new product";
    cout<<"show: "<<PRODUCT_NAME<<" addr: " << &PRODUCT_NAME<<endl;
}

int main(){
    show_message();
    show();
}

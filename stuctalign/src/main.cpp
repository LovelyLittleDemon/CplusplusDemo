#include <iostream>
#include "stuckalign.h"

using namespace std;

int main() {
    student stu;
    int size_student = sizeof(student);
    cout << "sizeof(student) : " << size_student << " info: " << sizeof(stu.info) << " age: " << sizeof(stu.age)
         << " info: " << sizeof(stu.time) << endl;

    worker work;
    int size_work = sizeof(worker);
    cout << "sizeof(worker) : " <<size_work<<" time: " << sizeof(work.time) << " info: " << sizeof(work.info) << " age: " << sizeof(work.age)
         << endl;

    farmer farm;
    int size_farm = sizeof(farmer);
    cout << "sizeof(farm) : " << size_farm<< " info: " << sizeof(farm.info) <<" time: " << sizeof(farm.time) << " age: " << sizeof(farm.age)<< endl;

    teacher tea;
    int size_tea = sizeof(teacher);
    cout << "sizeof(tea) : " << size_tea<< " time: " << sizeof(tea.time) << " info: " << sizeof(tea.info) << " age: " << sizeof(tea.age)
         << " extra: "<< sizeof(tea.extra) << endl;
    return 0;
}
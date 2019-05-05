//
// Created by sensetime on 19-4-18.
//

#ifndef LEETCODE_STUCKALIGN_H
#define LEETCODE_STUCKALIGN_H

typedef struct student{
    char info;
    int age;
    double time;
}*pstudent;

typedef struct worker{
    double time;
    char info;
    int age;
}*pworker;

typedef struct farmer{
    char info;
    double time;
    int age;
}*pfarmer;

typedef struct teacher{
    double time;
    char info;
    int age;
    char extra;
}*pteacher;


#endif //LEETCODE_STUCKALIGN_H

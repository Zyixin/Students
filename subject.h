//
// Created by zyx on 18-10-23.
//

#ifndef STUDENTS_SUBJECT_H
#define STUDENTS_SUBJECT_H

#include <iostream>
#include "teacher.h"

using std::string;
class Subject{
public:
    Subject() = delete;
    explicit Subject(string subject_name, float points, short times , bool complusory) ;

    virtual ~Subject();

private:
    string m_subject_name;
    float m_point;
    short m_times;
    bool m_complusory;

    vector<shared_ptr<Teacher>> mp_teachers;
    //Option<string> m_description;
};

#endif //STUDENTS_SUBJECT_H

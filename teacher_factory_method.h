//
// Created by zyx on 18-10-24.
//

#ifndef STUDENTS_TEACHER_FACTORY_METHOD_H
#define STUDENTS_TEACHER_FACTORY_METHOD_H


#include "factory_method.h"

class TeacherFactoryMethod : public FactoryMethod {
    zyx::Chinese createChinese() override;
};


#endif //STUDENTS_TEACHER_FACTORY_METHOD_H

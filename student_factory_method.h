//
// Created by zyx on 18-10-24.
//

#ifndef STUDENTS_STUDENT_FACTORY_METHOD_H
#define STUDENTS_STUDENT_FACTORY_METHOD_H

#include <iostream>
#include <cstring>
#include "factory_method.h"

class StudentFactoryMethod : public FactoryMethod{
    Chinese createChinese() override;
};


#endif //STUDENTS_STUDENT_FACTORY_METHOD_H

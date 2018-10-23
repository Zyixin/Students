//
// Created by zyx on 18-10-24.
//

#ifndef STUDENTS_FACTORY_METHOD_H
#define STUDENTS_FACTORY_METHOD_H


#include "chinese.h"

class FactoryMethod {
public:
    virtual Chinese createChinese() = 0;
};


#endif //STUDENTS_FACTORY_METHOD_H

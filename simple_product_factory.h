//
// Created by zyx on 18-10-24.
//

#ifndef STUDENTS_SIMPLE_PRODUCT_FACTORY_H
#define STUDENTS_SIMPLE_PRODUCT_FACTORY_H

#include <iostream>
#include <cstring>
#include "chinese.h"

class SimpleFactory{
public:
    static zyx::Chinese create_chinese(string type) ;
};
#endif //STUDENTS_SIMPLE_PRODUCT_FACTORY_H

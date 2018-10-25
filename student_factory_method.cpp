//
// Created by zyx on 18-10-24.
//

#include "student_factory_method.h"
#include "student.h"

zyx::Chinese StudentFactoryMethod::createChinese() {
    shared_ptr<string> s_name (new string("factoryMethod_student"));
    unsigned int s_id = 1;
    int s_age = 18;
    vector<string> ming_comp_sub;
    ming_comp_sub.push_back("English");
    ming_comp_sub.push_back("Math");
    vector<string> ming_elec_sub;
    ming_elec_sub.push_back("computer");
    ming_elec_sub.push_back("music");
    zyx::Student student_product(s_name,s_id,s_age,ming_comp_sub,ming_elec_sub);
    return student_product;
  //  return
}
//
// Created by zyx on 18-10-24.
//

#include "teacher_factory_method.h"
#include "teacher.h"

using std::vector;
zyx::Chinese TeacherFactoryMethod::createChinese() {
    shared_ptr<string> t_name (new string("factoryMethod_teacher"));
    unsigned int t_id = 11;
    int t_age = 30;
    vector<string> t_subjects;
    t_subjects.push_back("Math");
    t_subjects.push_back("English");
    zyx::Teacher teacher_product(t_name,t_id,t_age,t_subjects);
    // cout<<teacher_product<<endl;
    return teacher_product;
}
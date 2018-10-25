//
// Created by zyx on 18-10-17.
//

#ifndef STUDENTS_TEACHER_H
#define STUDENTS_TEACHER_H

#include <iostream>
#include <functional>
#include <vector>

#include "chinese.h"

namespace zyx {
    class Student;

    using std::vector;

    typedef std::function<void(string, string)> Fun;

    class Teacher : public Chinese {
    public:
        Teacher() = delete;

        explicit Teacher(shared_ptr<string> name, unsigned int id, int age, vector<string> m_subjects);  //构造函数
        Teacher(Teacher &teacher);  //拷贝构造函数
        // Teacher& operator=(const Teacher& p);//赋值运算符
        // Teacher(Teacher &&c);//移动构造函数*/

        void set_career(shared_ptr<string> career);

        shared_ptr<string> get_career();

        // vector<string> get_subject() ;

        void t_callback(string s_name, string t_name);

        void bind(Student student, Teacher teacher);

        virtual ~Teacher();


    private:
        vector<string> m_subjects;

    };
}
#endif //STUDENTS_TEACHER_H

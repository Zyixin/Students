//
// Created by zyx on 18-10-18.
//

#ifndef STUDENTS_STUDENT_H
#define STUDENTS_STUDENT_H

#include <iostream>
#include <vector>
#include "chinese.h"
#include "subject.h"
using zyx::Subject;
using std::vector;
using std::string;
typedef std::function<void (string,string)> Fun;

namespace zyx {
    class Student : public Chinese {
    public:

        //  explicit Student(char* name, unsigned int id,int age);   //:Chinese(name,id,age) ;
        explicit Student(shared_ptr<string> name, unsigned int id, int age, vector<string> compulsory_subjects,
                         vector<string> elective_subjects);  //:Chinese(name,id,age) ;

        Student(Student &student);

        shared_ptr<string> get_career();

        void set_career(shared_ptr<string> career);

        vector<string> get_compulosory_subjects();

        void set_compulosory_subjects();

        vector<string> get_elective_subjects();

        void set_elective_subjects();

        void transfer_subjects();

        void call_name(Student student, string t_name, Fun f);

        virtual ~Student();

    private:
        vector<string> m_compulsory_subjects;
        vector<string> m_elective_subjects;
        shared_ptr<Teacher> head; //班主任
        vector<shared_ptr<Subject>> m_subjects;
    };
}
#endif //STUDENTS_STUDENT_H

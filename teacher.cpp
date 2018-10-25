#include <iostream>
#include <cstring>

#include "teacher.h"
#include "student.h"
namespace zyx {
    Teacher::Teacher(shared_ptr<string> name, unsigned int id, int age, vector<string> subjects) : Chinese(name, id,
                                                                                                           age) {
        // m_subjects.assign(subjects.begin(),subjects.end());
    }

    Teacher::Teacher(Teacher &teacher) : Chinese(teacher) {
        // cout<<"teacher拷贝构造函数"<<endl;
        m_subjects = teacher.m_subjects;
    }

/*void Teacher::set_career(const char* career){
    this->msp_career = const_cast<char *>(career);
}*/

    void Teacher::set_career(shared_ptr<string> career) {
//    Chinese::set_career(career);
        msp_career = career;
    }


    shared_ptr<string> Teacher::get_career() {
        // cout<<*msp_career<<endl;
        //  string str(*msp_career);
        return msp_career;
    }

    void Teacher::t_callback(string s_name, string t_name) {
        cout << s_name << "---" << t_name << endl;
    }

    void Teacher::bind(Student student, Teacher teacher) {
        string t_name = *teacher.get_name();
        Fun fun = std::bind(&Teacher::t_callback, this, std::placeholders::_1, std::placeholders::_2);
        student.call_name(student, t_name, fun);
    }

/*vector<string> Teacher::get_subject(){
    return m_subjects;
}*/

    Teacher::~Teacher() {
        //   cout<<"#######Teacher#########"<<endl;
        // delete mp_career;
    }

}
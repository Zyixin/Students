#include<iostream>
#include <vector>
#include <cstring>
#include "student.h"

using std::make_shared;

/*Student::Student(char *name, unsigned int id, int age):Chinese(name,id,age) {

}*/
zyx::Student::Student(shared_ptr<string>  name, unsigned int id, int age, vector<string> compulsory_subjects,
                 vector<string> elective_subjects):Chinese(name,id,age) {

}
zyx::Student::Student(Student &student):Chinese(student) {
    m_elective_subjects=student.m_elective_subjects;
    m_compulsory_subjects=student.m_compulsory_subjects;
}


void zyx::Student::set_career(shared_ptr<string>  career) {
    msp_career = career;
    /*    int temp_len = strlen(career);
    msp_career = nullptr;
    msp_career = make_shared<char*>(new char[temp_len]);
    strcpy(*msp_career, career);*/
}

shared_ptr<string>  zyx::Student::get_career() {
  //  string str(*msp_career);
    return msp_career;
}

void zyx::Student::call_name(Student student,string t_name,Fun f){
    string s_name = *student.get_name();
    f(s_name,t_name);
}


zyx::Student::~Student(){
   // cout<<"#######S#########"<<endl;
    //delete mp_career;
    m_compulsory_subjects.clear();
    m_elective_subjects.clear();

}
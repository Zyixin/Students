#include "simple_product_factory.h"
using std::string;

   Chinese SimpleFactory::create_chinese(string type){
        if(strcmp("teacher",type.c_str())==0){
            shared_ptr<string> t_name (new string("product_teacher"));
            unsigned int t_id = 11;
            int t_age = 30;
            vector<string> t_subjects;
            t_subjects.push_back("Math");
            t_subjects.push_back("English");
            Teacher teacher_product(t_name,t_id,t_age,t_subjects);
           // cout<<teacher_product<<endl;
            return teacher_product;
        }
        else if(strcmp("student",type.c_str())==0){
            shared_ptr<string> s_name (new string("product_student"));
            unsigned int s_id = 1;
            int s_age = 18;
            vector<string> ming_comp_sub;
            ming_comp_sub.push_back("English");
            ming_comp_sub.push_back("Math");
            vector<string> ming_elec_sub;
            ming_elec_sub.push_back("computer");
            ming_elec_sub.push_back("music");
            Student student_product(s_name,s_id,s_age,ming_comp_sub,ming_elec_sub);
            return student_product;
        }
        else{
            cout<<"error"<<endl;
        }
    }


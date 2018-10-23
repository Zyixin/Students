#include <iostream>
#include <vector>
#include <cstdio>
#include <memory>
#include "chinese.h"
#include "teacher.h"
#include "student.h"
#include "factory_method.h"
#include "simple_product_factory.h"
#include "./googletest/include/gtest/gtest.h"
#include "student_factory_method.h"

using std::cout;
using std::make_shared;
/*TEST(TEST1,Chinese_Test_get) {
    char my_name[]="ming_ming";
    unsigned int my_id = 1;
    int age = 18;
    Chinese ming_ming(my_name,my_id,age);
    string name = ming_ming.get_name();
    EXPECT_EQ(name,"ming_ming");
    EXPECT_EQ(my_id,ming_ming.get_id());
    EXPECT_EQ(age,ming_ming.get_age());
}*/

/*
TEST(TEST2,Chinese_Test_set) {
    char my_name[]="ming_ming";
    unsigned int my_id = 1;
    int age = 18;
    Chinese ming_ming(my_name,my_id,age);
    string name = ming_ming.get_name();
    EXPECT_EQ(name,"ming_ming");
    EXPECT_EQ(my_id,ming_ming.get_id());
    EXPECT_EQ(age,ming_ming.get_age());
}
*/

//GTEST_API_  int argc, char **argv
int main() {
  //  testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    shared_ptr<string> my_name (new string("ming_ming"));
    //string my_name ="ming_ming";
   // shared_ptr<char*> name = make_shared<char*>(my_name);
    unsigned int my_id = 1;
    int age = 18;
    Chinese ming_ming(my_name,my_id,age);

    cout<<"----Test_Get----"<<endl;
    cout<<"get_name : "<<*ming_ming.get_name()<<endl;
    cout<<"get_id : "<<ming_ming.get_id()<<endl;
    cout<<"get_age : "<<ming_ming.get_age()<<endl;

/*    cout<<"使用智能指针"<<endl;
    char *zhang_name = "zhang";
    shared_ptr<char*> zhang_name_1 = make_shared<char*>(zhang_name);
    shared_ptr<Chinese> zhang_p = make_shared<Chinese>(Chinese(zhang_name_1,my_id,age));
    cout<<*zhang_name_1<<endl;*/
/*    char *zhang_name = "zhanghongtai";
    shared_ptr<char*> zhanghongtai_name = make_shared<char*>(zhang_name);
    unique_ptr<Chinese> zhang_p = make_unique<Chinese>(Chinese(zhanghongtai_name,my_id,age));
    cout<<*zhanghongtai_name<<endl;
    cout<<"使用智能指针结束"<<endl;*/
    cout<<"----Test_Set----"<<endl;
    shared_ptr<string> chinese_name (new string("xiao_ming"));
    ming_ming.set_name(chinese_name);
    ming_ming.set_id(2);
    ming_ming.set_age(20);
    cout<<"get_name2 : "<<*ming_ming.get_name()<<endl;
    cout<<"get_id2 : "<<ming_ming.get_id()<<endl;
    cout<<"get_age2 : "<<ming_ming.get_age()<<endl;

    cout<<"----Test_Copy----"<<endl;
    Chinese chinese_ming_copy(ming_ming);
    cout<<chinese_ming_copy<<endl;
    cout<<"get_name_copy : "<<*chinese_ming_copy.get_name()<<endl;
    cout<<"get_id_copy : "<<chinese_ming_copy.get_id()<<endl;
    cout<<"get_age_copy : "<<chinese_ming_copy.get_age()<<endl;

    cout<<"----Test_=Operator----"<<endl;
    shared_ptr<string> my_name_1 (new string("hahahahahahah"));
 //   char my_name_1[]="hahahahahahah";
    unsigned int my_id_1 = 122;
    int age_1 = 199;
    Chinese chinese_ming_assign(my_name_1,my_id_1,age_1);
    chinese_ming_assign = ming_ming;
    cout<<chinese_ming_assign<<endl;
    cout<<"get_name_Operator : "<<*chinese_ming_assign.get_name()<<endl;
    cout<<"get_id_Operator : "<<chinese_ming_assign.get_id()<<endl;
    cout<<"get_age_Operator : "<<chinese_ming_assign.get_age()<<endl;

//=============================================================================

    cout<<""<<endl;
    cout<<"----Teacher-test----"<<endl;
    shared_ptr<string> t_name (new string("teacher_haha"));
    unsigned int t_id = 11;
    int t_age = 30;
    vector<string> t_subjects;
    t_subjects.push_back("Math");
    t_subjects.push_back("English");
    Teacher teacher_haha(t_name,t_id,t_age,t_subjects);
    shared_ptr<string> t_career (new string("I am a teacher"));
    teacher_haha.set_career(t_career);
    cout<<teacher_haha.get_career()<<endl;
    cout<<"----Teacher-copy----"<<endl;
    cout<<"get_name : "<<*teacher_haha.get_name()<<endl;
    cout<<"get_id : "<<teacher_haha.get_id()<<endl;
    cout<<"get_age : "<<teacher_haha.get_age()<<endl;

    Teacher teacher_haha_copy(teacher_haha);
    cout<<teacher_haha_copy<<endl;
/*    cout<<"get_name : "<<*teacher_haha_copy.get_name()<<endl;
    cout<<"get_id : "<<teacher_haha_copy.get_id()<<endl;
    cout<<"get_age : "<<teacher_haha_copy.get_age()<<endl;*/
 //   cout<<"get_subject : "<<teacher_haha_copy.get_subject()<<endl;


//=============================================================
    cout<<""<<endl;
    cout<<"----Student-test----"<<endl;
    vector<string> ming_comp_sub;
    ming_comp_sub.push_back("English");
    ming_comp_sub.push_back("Math");
    vector<string> ming_elec_sub;
    ming_elec_sub.push_back("computer");
    ming_elec_sub.push_back("music");

    Student student_ming(ming_ming.get_name(),ming_ming.get_id(),ming_ming.get_age(),ming_comp_sub,ming_elec_sub);
    cout<<student_ming<<endl;

   // char* s_career="I am a student";
    shared_ptr<string> s_career (new string("I am a student")) ;
    student_ming.set_career(s_career);
    cout<<*student_ming.get_career()<<endl;
  //  cout<<"----Student-=opretor----"<<endl;
  //  Student li_li = student_ming;
  //  char* li_name="li_li";
  //  li_li.set_name(li_name);
   // cout<<li_li<<endl;

    cout<<"----Student-Auto_ptr----"<<endl;
    auto comp_subjects = ming_comp_sub;
    auto ele_subjects = ming_elec_sub;
  //  Student* other_student = new Student("makun",2,23,comp_subjects,ele_subjects);
 //   shared_ptr<Student> other_s_student = shared_ptr<Student>(other_student);

    //Student* other_student = new Student("makun",2,23,comp_subjects,ele_subjects);
    shared_ptr<string> ss_name (new string("student")) ;
    shared_ptr<Student> other_s_student = shared_ptr<Student>(new Student(ss_name,2,23,comp_subjects,ele_subjects));

    cout<<*other_s_student<<endl;
    //shared_ptr<string> chinese_name (new string("xiao_ming"));
    shared_ptr<string> ss_career (new string("I am a university student")) ;
    other_s_student->set_career(ss_career);
    cout<<*other_s_student->get_career()<<endl;

//=========================================================================================
    cout<<"____________callback____________"<<endl;
    teacher_haha.bind(student_ming,teacher_haha);

    cout<<"____________SimpleFactory____________"<<endl;   //simple_product_factory.cpp/.h
    shared_ptr<string> c_name (new string(" "));
    unsigned int c_id = 0;
    int c_age = 0;
    Chinese product_chinese(c_name,c_id,c_age);
    SimpleFactory simple_factory;
    product_chinese = simple_factory.create_chinese("teacher");
    cout<<product_chinese<<endl;

    cout<<"____________FactoryMethod____________"<<endl;
    shared_ptr<string> cc_name (new string(" "));
    unsigned int cc_id = 0;
    int cc_age = 0;
    Chinese factory_method_chinese(cc_name,cc_id,cc_age);
    FactoryMethod *factoryMethod = NULL;
    factoryMethod = new StudentFactoryMethod();
    factory_method_chinese = factoryMethod->createChinese();
    cout<<factory_method_chinese<<endl;


    return 0;
}
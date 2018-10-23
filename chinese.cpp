#include <iostream>
#include <cstring>

#include "chinese.h"
using namespace std;

Chinese::Chinese(shared_ptr<string> name, unsigned int id, int age):m_id(id),m_age(age){
  //  cout << "construct Chinese with shared_ptr" << endl;
    msp_career = nullptr;
    msp_name = name; // 共享指针+1
}
/*Chinese::Chinese(string name, unsigned int id, int age) : m_id(id), m_age(age) {
 //   cout << "construct Chinese with shared_ptr" << endl;
    int temp_len = name.size();
    msp_career = nullptr;
    msp_name = make_shared<string>(new string[temp_len]);
    *msp_name = name;
  //  strcpy(*msp_name, name);
}*/

Chinese::Chinese(Chinese &chinese) {
    cout<<"copycopycopy"<<endl;

    m_id = chinese.m_id;
    //mp_name = chinese.mp_name;  //浅拷贝 会析构两次
//    mp_name = new
    m_age = chinese.m_age;

    msp_name.reset(); // 释放msp——name 所指向的对象，引用计数减1
    if (chinese.msp_name == nullptr) {
        msp_name = nullptr;
    } else {
      //  int temp_len = strlen(*chinese.msp_name);
       //  msp_name = make_shared<string>(new string); // 重新分配内存
     //   strcpy(*msp_name, *chinese.msp_name);
        msp_name = chinese.msp_name;
    }



/*
    if (chinese.mp_name == nullptr) {
        mp_name = nullptr;
    } else {
        int temp_len = strlen(chinese.mp_name);
        mp_name = new char[temp_len]; // 重新分配内存
        strcpy(mp_name, chinese.mp_name);
    }
*/


//    if(mp_career){
//        cout<<mp_career<<endl;
//        delete mp_career;// 释放已占有的内存
//    }
    msp_career.reset();
    if (chinese.msp_career == nullptr) {
        msp_career = nullptr;
    } else {
     //   int temp_len = strlen(*chinese.msp_career);
     //   msp_career = make_shared<char*>(new char[temp_len]); // 重新分配内存
       msp_career = chinese.msp_career;
    }


}
Chinese& Chinese::operator=(const Chinese &chinese) {
    cout<<"======================="<<endl;

    m_id = chinese.m_id;
   // mp_name = chinese_1.mp_name;
    m_age = chinese.m_age;

    msp_name.reset(); // 释放msp——name 所指向的对象，引用计数减1
    if (chinese.msp_name == nullptr) {
        msp_name = nullptr;
    } else {
        msp_name = chinese.msp_name;
    }


//    if(mp_career){
//        cout<<mp_career<<endl;
//        delete mp_career;// 释放已占有的内存
//    }
    msp_career.reset();
    if (chinese.msp_career == nullptr) {
        msp_career = nullptr;
    } else {
      //  int temp_len = strlen(*chinese.msp_career);
     //   msp_career = make_shared<char*>(new char[temp_len]); // 重新分配内存
      //  strcpy(*msp_career, *chinese.msp_career);
        msp_career = chinese.msp_career;
    }
}

shared_ptr<string> Chinese::get_name(){
    return msp_name;
}
void Chinese::set_name(shared_ptr<string> name){
    msp_name = name;
}

unsigned int Chinese::get_id(){
    return m_id;
}
void Chinese::set_id(unsigned int id){
    this->m_id=id;
}

int Chinese::get_age(){
    return m_age;
}
void Chinese::set_age(int age){
    this->m_age=age;
}
// 虚函数默认实现
void Chinese::set_career(shared_ptr<string> career) {
//    msp_career = nullptr;
}

Chinese::~Chinese(){
  //  cout<<"#######Chinese#########"<<endl;
 //  delete mp_name;
 //  delete mp_career;
   // cout << "destruct Chinese" << endl;
}
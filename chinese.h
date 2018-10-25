//
// Created by zyx on 18-10-17.
//

#ifndef STUDENTS_CHINESE_H
#define STUDENTS_CHINESE_H
#include <memory>
#include <iostream>

using std::shared_ptr;
using std::ostream;
using std::cout;
using std::endl;
using std::string;

namespace zyx {
    class Chinese {
    public:
        Chinese() = delete;

        explicit Chinese(shared_ptr<string> name, unsigned int id, int age);   //构造函数

        // explicit Chinese(string name, unsigned int id, int age );

        Chinese(Chinese &chinese);  //拷贝构造函数
        Chinese &operator=(const Chinese &p);//赋值运算符

        //  Chinese(Chinese &&c){}//移动构造函数

        shared_ptr<string> get_name();

        void set_name(shared_ptr<string> name);

        unsigned int get_id();

        void set_id(unsigned int id);

        int get_age();

        void set_age(int age);

        virtual void set_career(shared_ptr<string> career);

        friend ostream &operator<<(ostream &output, const Chinese &c) {
                cout << "~~~~~~ostream~~~~~" << endl;

                output << c.m_id << endl;
                output << *c.msp_name << endl;
                output << c.m_age << endl;

                cout << "~~~~~~ostream~~~~~" << endl;

                return output;
        }//运算符重载

        virtual ~Chinese(); //析

    protected:
        shared_ptr<string> msp_career;
        shared_ptr<string> msp_name;
        unsigned int m_id;
    private:
        int m_age;
    };

}//namespace
#endif //STUDENTS_CHINESE_H

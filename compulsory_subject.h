//
// Created by zyx on 18-10-23.
//

#ifndef STUDENTS_COMPULSORY_SUBJECT_H
#define STUDENTS_COMPULSORY_SUBJECT_H


#include "subject.h"

namespace lele {

    class CompulsorySubject : public Subject {
    public:
        CompulsorySubject(const string &m_subject_name, float m_point, short m_times,
                          const Option<string> &m_description,
                          const vector<shared_ptr<Teacher>> &mp_teachers);
    };

}


#endif //STUDENTS_COMPULSORY_SUBJECT_H

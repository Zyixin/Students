//
// Created by zyx on 18-10-23.
//

#include "elective_subject.h"

zyx::ElectiveSubject::ElectiveSubject(const string &m_subject_name, float m_point, short m_times,
                                       const Option<string> &m_description,
                                       const vector<shared_ptr<zyx::Teacher>> &mp_teachers) : Subject(m_subject_name,
                                                                                                       m_point, m_times,
                                                                                                       m_description,
                                                                                                       mp_teachers) {}
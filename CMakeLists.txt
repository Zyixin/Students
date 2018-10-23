cmake_minimum_required(VERSION 3.12)
project(Students)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(./googletest)

include_directories(./googletest/include)
link_directories(./googletest)

set(Subject_SRC subject.h subject.cpp compulsory_subject.h compulsory_subject.cpp elective_subject.h elective_subject.cpp)
set(Simple_factory_SRC simple_product_factory.cpp simple_product_factory.h)
set(Factory_method_SRC teacher_factory_method.cpp teacher_factory_method.h student_factory_method.cpp student_factory_method.h
        factory_method.cpp factory_method.h)

add_executable(Students main.cpp chinese.h chinese.cpp teacher.h teacher.cpp student.h student.cpp subject.h subject.cpp ${Subject_SRC} ${Simple_factory_SRC} ${Factory_method_SRC})


#teacher.h teacher.cpp
add_executable(Test main_1.cpp)

set(LIBRARIES
        test
        pthread)

#[[set(SOURCE_FILES main.cpp)]]

target_link_libraries(Test ${LIBRARIES})
target_link_libraries(Students ${LIBRARIES})
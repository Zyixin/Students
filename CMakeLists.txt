cmake_minimum_required(VERSION 3.12)
project(Students)

set(CMAKE_CXX_STANDARD 11)


add_subdirectory(./googletest)

include_directories(./googletest/include)
link_directories(./googletest)

add_executable(Students main.cpp chinese.h chinese.cpp teacher.h teacher.cpp student.h student.cpp subject.h subject.cpp)


#teacher.h teacher.cpp
add_executable(Test main_1.cpp)

set(LIBRARIES
        test
        pthread)

#[[set(SOURCE_FILES main.cpp)]]

target_link_libraries(Test ${LIBRARIES})
target_link_libraries(Students ${LIBRARIES})
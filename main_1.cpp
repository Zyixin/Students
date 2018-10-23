#include <iostream>
#include "./googletest/include/gtest/gtest.h"

using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(Test1, TestError) {
    EXPECT_EQ(4, add(2, 3));
}

TEST(Test2, TestTrue) {
    EXPECT_EQ(4, add(2, 2));
}


GTEST_API_ int main(int argc, char **argv) {
    cout << "hello,world!" << endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
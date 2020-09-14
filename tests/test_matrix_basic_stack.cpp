#include <gtest/gtest.h>
#include "../src/matrix_basic/matrix_on_stack.hpp"

TEST(TEST_MATRIX_BASIC_STACK, CONSTRUCTOR) {
    Matrix<int> m{1};
    ASSERT_EQ(m.get_elems()[0], 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
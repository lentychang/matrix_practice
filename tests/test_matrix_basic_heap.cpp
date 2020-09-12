#include "../src/matrix_basic/matrix_on_heap.hpp"
#include <gtest/gtest.h>

TEST(TEST_MATRIX_BASIC_HEAP,CONSTRUCTOR_initializer_list){
    Matrix<int> m{1};
    ASSERT_EQ(m.get_elems()[0],1);
}

TEST(TEST_MATRIX_BASIC_HEAP,CONSTRUCTOR_same_value){
    Matrix<int> m(10,12);
    ASSERT_EQ(m.get_elems()[9],12);
    ASSERT_EQ(m.get_elems()[8],12);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}
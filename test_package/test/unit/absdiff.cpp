#include <gtest/gtest.h>
#include <test.hpp>



// [en] happy path: sign combinations / [zh] 正常路径：符号组合
TEST(TestAbsDiffF32, HappyPath) {
    EXPECT_FLOAT_EQ(test_abs_diff_f32(5.0F, 2.0F), 3.0F);
    EXPECT_FLOAT_EQ(test_abs_diff_f32(-5.0F, -2.0F), 3.0F);
    EXPECT_FLOAT_EQ(test_abs_diff_f32(-2.0F, 5.0F), -3.0F);
}



// [en] boundary: zero and equality / [zh] 边界：零与相等
TEST(TestAbsDiffF32, Boundary) {
    EXPECT_FLOAT_EQ(test_abs_diff_f32(0.0F, 0.0F), 0.0F);
    EXPECT_FLOAT_EQ(test_abs_diff_f32(7.0F, 7.0F), 0.0F);
    EXPECT_FLOAT_EQ(test_abs_diff_f32(4.0F, 0.0F), 4.0F);
    EXPECT_FLOAT_EQ(test_abs_diff_f32(0.0F, 4.0F), -4.0F);
}

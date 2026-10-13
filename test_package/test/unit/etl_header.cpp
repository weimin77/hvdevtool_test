#include <gtest/gtest.h>
#include <etl.hpp>



// [en] covers include/etl.hpp vector add/sub / [zh] 覆盖 include/etl.hpp 的向量加减
TEST(EtlHeader, VecAddSub) {
    const float a[3] = {1.0F, 2.0F, 3.0F};
    const float b[3] = {0.5F, 1.5F, 2.5F};
    float sum[3] = {0.0F, 0.0F, 0.0F};
    float diff[3] = {0.0F, 0.0F, 0.0F};

    fcpp_vec_add_f32(a, b, sum, 3);
    fcpp_vec_sub_f32(a, b, diff, 3);

    EXPECT_FLOAT_EQ(sum[0], 1.5F);
    EXPECT_FLOAT_EQ(sum[1], 3.5F);
    EXPECT_FLOAT_EQ(sum[2], 5.5F);
    EXPECT_FLOAT_EQ(diff[0], 0.5F);
    EXPECT_FLOAT_EQ(diff[1], 0.5F);
    EXPECT_FLOAT_EQ(diff[2], 0.5F);
}

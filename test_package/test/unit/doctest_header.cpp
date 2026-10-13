#include <gtest/gtest.h>
#include <doctest.hpp>
#include <vector>



// [en] covers include/doctest.hpp inplace_transform / [zh] 覆盖 include/doctest.hpp 的 inplace_transform
TEST(DoctestHeader, InplaceTransform) {
    std::vector<int> values = {1, 2, 3, 4};
    inplace_transform(values, [](int& n) { n *= n; });

    EXPECT_EQ(values[0], 1);
    EXPECT_EQ(values[1], 4);
    EXPECT_EQ(values[2], 9);
    EXPECT_EQ(values[3], 16);
}

#include <gtest/gtest.h>
#include <ctest.h>



// [en] smoke test covering include/ctest.h / [zh] 覆盖 include/ctest.h 的冒烟测试
TEST(CTestHeader, Smoke) {
    test_c_compiler();
    test_c_generic();
    test_c_zlib();
    test_c_pcre();
}

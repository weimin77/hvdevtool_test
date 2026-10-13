// Conan::ImportStart
#include <test.hpp>
// Conan::ImportEnd



/**
 * @brief [en] Absolute values of two 32-bit floats subtracted: |a| - |b|
 * @brief [zh] 两个 32 位浮点数绝对值相减：|a| - |b|
 */
float test_abs_diff_f32(float a, float b) {
    const float abs_a = (a < 0.0F) ? -a : a;
    const float abs_b = (b < 0.0F) ? -b : b;
    return abs_a - abs_b;
}

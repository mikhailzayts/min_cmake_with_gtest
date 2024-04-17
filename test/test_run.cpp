#include <gtest/gtest.h>
#include "super.h"

TEST(test1, Something)
{
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}

TEST(super, GetMagic)
{
    EXPECT_EQ(super_magic_get(), 0x1234ABCD);
}

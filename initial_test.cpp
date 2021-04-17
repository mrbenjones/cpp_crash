//
// Created by ben on 4/17/2021.
//
#include <gtest/gtest.h>
TEST(InitialTest, BasicAssertions) {
    EXPECT_STRNE("one", "two");
    EXPECT_EQ(6*7, 42);
}
#include "initial_test.h"

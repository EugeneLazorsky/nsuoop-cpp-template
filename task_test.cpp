
#include "task.h"
#include "gtest/gtest.h"

namespace {

TEST(TaskTest, plus) {
    using task::plus;

    EXPECT_EQ(plus(2, 3), 5);
}

}
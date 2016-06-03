#include <string>

#include <gtest/gtest.h>

#include "ifelse_decider.h"

TEST(IfElseTest, GetBonScott)
{
    std::string expected_vocalist("Bon Scott");

    std::string retrieved_vocalist(getBonScott());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

#include <string>

#include <gtest/gtest.h>

#include "mapper.h"

TEST(IfElseTest, GetBonScott)
{
    std::string expected_vocalist("Bon Scott");

    std::string retrieved_vocalist(getBonScott());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetBrian)
{
    std::string expected_vocalist("Brian Johnson");

    std::string retrieved_vocalist(getBrian());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetAxl)
{
    std::string expected_vocalist("Axl Rose");

    std::string retrieved_vocalist(getAxl());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetVocalistBon)
{
    std::string expected_vocalist("Bon Scott");

    std::string retrieved_vocalist(getVocalist("Touch Too Much"));

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetVocalistBrian)
{
    std::string expected_vocalist("Brian Johnson");

    std::string retrieved_vocalist(getVocalist("Hells Bells"));

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetVocalistAxl)
{
    std::string expected_vocalist("Axl Rose");

    std::string retrieved_vocalist(getVocalist("Whole Lotta Rosie"));

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetVocalistDefault)
{
    std::string expected_vocalist("Bon Scott");

    std::string retrieved_vocalist(getVocalist("The Jack"));

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}


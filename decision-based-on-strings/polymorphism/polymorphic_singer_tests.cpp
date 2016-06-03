#include <string>

#include <gtest/gtest.h>

#include "singer.h"

TEST(IfElseTest, GetBonScott)
{
    std::string expected_vocalist("Bon Scott");

    BonScott aBonScott;
    std::string retrieved_vocalist(aBonScott.getSinger());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetBrian)
{
    std::string expected_vocalist("Brian Johnson");

    BrianJohnson aBrianJohnson;
    std::string retrieved_vocalist(aBrianJohnson.getSinger());

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

TEST(IfElseTest, GetAxl)
{
    std::string expected_vocalist("Axl Rose");

    AxlRose aAxlRose;
    std::string retrieved_vocalist(aAxlRose.getSinger());

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
    std::string expected_vocalist("Default singer");

    std::string retrieved_vocalist(getVocalist("The Jack"));

    EXPECT_EQ(expected_vocalist, retrieved_vocalist);
}

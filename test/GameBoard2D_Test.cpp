#include <gtest/gtest.h>
#include "GameBoard2D.hpp"

TEST(Suite1, shouldSucceed)
{
    ASSERT_TRUE(true);
}

TEST(Suite1, shouldFail)
{
    ASSERT_FALSE(true);
}

TEST(BoardTests, constructorPopulatesVector)
{
    GameBoard2D<int> actual{1, 2, 3, 4, 5};
    std::vector<int> expected{1, 2, 3, 4, 5};
    for(std::size_t i{0}; i < expected.size(); ++i)
    {
        ASSERT_EQ(expected.at(i), actual.get_cells().at(i));
    }
}
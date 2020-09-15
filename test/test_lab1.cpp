#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));

}
TEST(task1, test2)
{
	ASSERT_DOUBLE_EQ(1.0, average(1.5, 0.5));

}
TEST(task1, test3)
{
	ASSERT_DOUBLE_EQ(false, good(1, 0));

}
TEST(task1, test4)
{
	ASSERT_DOUBLE_EQ(true, good(1, 0.999999999));

}

TEST(task1, test5)
{
	ASSERT_DOUBLE_EQ(2.0, improve(3.0, 3.0));

}

TEST(task1, test6)
{
	ASSERT_DOUBLE_EQ(1, iter(1, 0.999999999));

}
TEST(task1, test7)
{
	ASSERT_DOUBLE_EQ(4.0, iter(4.0, 16.0));

}
TEST(task1, test8)
{
	ASSERT_NEAR(2.6548913043478262, calc(7.0), 0.000001);

}
TEST(task1, test9)
{
	ASSERT_NEAR(3.0235294117647058, calc(9.0), 0.000001);

}
TEST(task1, test10)
{
	ASSERT_NEAR(2.3333333333333335, calc(5.0), 0.000001);

}
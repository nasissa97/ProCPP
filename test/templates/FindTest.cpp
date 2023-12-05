#include <gtest/gtest.h>
#include "find.cpp"

using namespace ::testing;

class FindTestSuite : public Test {
 protected:
  int intArr[5]{1, 2, 3, 4, 5};
  double doubleArr[5]{1.01, 2.02, 3.03, 4.04, 5.05};
};

TEST_F(FindTestSuite, IntArrayFind) {
 EXPECT_EQ(2, find(3, intArr, 5));
 EXPECT_EQ(-1, find(8, intArr, 5));
};

TEST_F(FindTestSuite, DoubleArrayFind) {
 EXPECT_EQ(-1, find(9.09, doubleArr, 5));
};

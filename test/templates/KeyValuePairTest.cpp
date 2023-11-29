#include <gtest/gtest.h>

#include "KeyValuePair.cpp"

using namespace ::testing;
using namespace templates;
class KeyValuePairTestSuite : public Test {
 protected:
  // Regular Call
  KeyValuePair<int, double> myPair1 {3, 5.5};
  KeyValuePair<double, int> myPair2{5.5, 3};
};

TEST_F(KeyValuePairTestSuite, KeyValuePairInstance) {
 EXPECT_EQ(3, myPair1.getKey());
 EXPECT_EQ(5.5, myPair1.getValue());

 EXPECT_EQ(5.5, myPair2.getKey());
 EXPECT_EQ(3, myPair2.getValue());
}
TEST_F(KeyValuePairTestSuite, CTAD) {
 // Class Template Argument Deduction(CTAD)
 int myInt{3};
 double myDouble{5.5};
 KeyValuePair ctadPair { myInt, myDouble };
 EXPECT_EQ(myInt, ctadPair.getKey());
 EXPECT_EQ(myDouble, ctadPair.getValue());
}


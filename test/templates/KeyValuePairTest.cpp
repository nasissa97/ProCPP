#include <gtest/gtest.h>

#include "KeyValuePair.cpp"

using namespace ::testing;
using namespace templates;
class KeyValuePairTestSuite : public Test {
 protected:
  KeyValuePair<int, double> myPair {3, 5.5};
};

TEST_F(KeyValuePairTestSuite, KeyValuePairInstance) {
 EXPECT_EQ(3, myPair.getKey());
 EXPECT_EQ(5.5, myPair.getValue());
}


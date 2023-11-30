#include <gtest/gtest.h>
#include "concat.cpp"

using namespace ::testing;

class ConcatTestSuite : public Test {
 protected:
  std::string expectedVal1 {"51.300000"};
  std::string expectedVal2 {"1.3000005"};
  std::string expectedVal3 {"48"};
  std::string expectedVal4 {"1.1000002.200000"};
  class Empty{};
  Empty empty1{};
  Empty empty2{};
 
};

TEST_F(ConcatTestSuite, CallConat) {
 auto actualVal1 { concat(5, 1.3) };
 auto actualVal2 { concat(1.3, 5) };
 auto actualVal3 { concat(4, 8) };
 auto actualVal4 { concat(1.1, 2.2) };

 /** Call to concat should not be compilable becuase Empty class is not convertable to string which break the type constraint for concat(). */
 // auto shouldNotCompile { concat(empty1, empty2) };

 EXPECT_EQ(expectedVal1, actualVal1);
 EXPECT_EQ(expectedVal2, actualVal2);
 EXPECT_EQ(expectedVal3, actualVal3);
 EXPECT_EQ(expectedVal4, actualVal4);
}






#include <gtest/gtest.h>

#include "KeyValuePair.cpp"
#include "KeyValuePair2.cpp"

#include <exception>
#include <string>

using namespace ::testing;
using namespace templates;
class KeyValuePairTestSuite : public Test {
 protected:
  // KeyValue Regular Call
  KeyValuePair<int, double> myPair1 {3, 5.5};
  KeyValuePair<double, int> myPair2{5.5, 3};
  KeyValuePair<std::string, std::string> myPair3{"FirstName", "LastName"};
  KeyValuePair<const char*, const char*> specializationPair{"John", "Doe"};
  // KeyValue2 Instance
  KeyValuePair2<int, double> keyValuePair2 {4, 1.1};
  /**
   * The KeyValuePair2 should not be able to compile becuase KeyValuePair2 constraint. Uncomment line the below to
   * verify that you can't compile which is expected. If it can compile then there's an issue with the Type Constraint.
   */
   // KeyValuePair2<double, int> keyValuePair2 {1.1, 4};

};

TEST_F(KeyValuePairTestSuite, KeyValuePairInstance) {
 EXPECT_EQ(3, myPair1.getKey());
 EXPECT_EQ(5.5, myPair1.getValue());

 EXPECT_EQ(5.5, myPair2.getKey());
 EXPECT_EQ(3, myPair2.getValue());

 EXPECT_EQ("FirstName", myPair3.getKey());
 EXPECT_EQ("LastName", myPair3.getValue());

 EXPECT_EQ("John", specializationPair.getKey());
 EXPECT_EQ("Doe", specializationPair.getValue());

 EXPECT_EQ(4, keyValuePair2.getKey());
 EXPECT_EQ(1.1, keyValuePair2.getValue());
}
TEST_F(KeyValuePairTestSuite, CTAD) {
 // Class Template Argument Deduction(CTAD)
 int myInt{3};
 double myDouble{5.5};
 KeyValuePair ctadPair { myInt, myDouble };
 EXPECT_EQ(myInt, ctadPair.getKey());
 EXPECT_EQ(myDouble, ctadPair.getValue());
}


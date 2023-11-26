#include <gtest/gtest.h>
#include "PersonBase.hpp"

#include <format>
#include <string>

using namespace ::testing;
class PersonBaseTestSuite : public Test {
protected:
  HR::PersonBase person{"John", "Doe"};
  std::string personExpected = std::format("{} {}", person.getFirstName(), person.getLastName());
};

TEST_F(PersonBaseTestSuite, PersonBaseInstance) {
  EXPECT_EQ("John", person.getFirstName());
  EXPECT_EQ("Doe", person.getLastName());
  EXPECT_EQ("JD", person.getInitials());
}

TEST_F(PersonBaseTestSuite, ChangePersonBaseFields) {
  person.setFirstName("Bob");
  EXPECT_EQ("Bob", person.getFirstName());
  EXPECT_EQ("BD", person.getInitials());
  person.setLastName("Wade");
  EXPECT_EQ("Wade", person.getLastName());
  EXPECT_EQ("BW", person.getInitials());
}

TEST_F(PersonBaseTestSuite, ComparisonOperators) {
  HR::PersonBase person2{ "Bob", "Wade" };
  EXPECT_EQ(true, person < person2);
  EXPECT_EQ(true, person != person2);
}

TEST_F(PersonBaseTestSuite, ToString) {
  EXPECT_EQ(personExpected, person.toString());

}

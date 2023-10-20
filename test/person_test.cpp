#include <gtest/gtest.h>
#include "Person.hpp"

using namespace ::testing;
class PersonTestSuite : public Test {
protected:
  Person person{"John", "Doe", "JD"};
};

TEST_F(PersonTestSuite, PersonInstance) {
  EXPECT_EQ("John", person.getFirstName());
  EXPECT_EQ("Doe", person.getLastName());
  EXPECT_EQ("JD", person.getInitials());
}

TEST_F(PersonTestSuite, CopyPerson) {
  auto copyPerson{person};
  EXPECT_EQ(person.getFirstName(), copyPerson.getFirstName());
  EXPECT_EQ(person.getLastName(), copyPerson.getLastName());
  EXPECT_EQ(person.getInitials(), copyPerson.getInitials());
}

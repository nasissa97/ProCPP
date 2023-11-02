#include <gtest/gtest.h>
#include "Person.hpp"


using namespace ::testing;
class PersonTestSuite : public Test {
protected:
  Person person{"John", "Doe"};
};

TEST_F(PersonTestSuite, PersonInstance) {
  EXPECT_EQ("John", person.getFirstName());
  EXPECT_EQ("Doe", person.getLastName());
  EXPECT_EQ("JD", person.getInitials());
}

TEST_F(PersonTestSuite, CopyPerson) {
  Person copyPerson{person};
  EXPECT_EQ(person.getFirstName(), copyPerson.getFirstName());
  EXPECT_EQ(person.getLastName(), copyPerson.getLastName());
  EXPECT_EQ(person.getInitials(), copyPerson.getInitials());
}

TEST_F(PersonTestSuite, AssignmentOperatorPerson) {
  Person otherPerson = person;
  EXPECT_EQ(person.getFirstName(), otherPerson.getFirstName());
  EXPECT_EQ(person.getLastName(), otherPerson.getLastName());
  EXPECT_EQ(person.getInitials(), otherPerson.getInitials());
}

TEST_F(PersonTestSuite, MovePerson) {
  Person movePerson{ std::move(person) };
  EXPECT_EQ("John", movePerson.getFirstName());
  EXPECT_EQ("Doe", movePerson.getLastName());
  EXPECT_EQ("JD", movePerson.getInitials());
}

TEST_F(PersonTestSuite, MoveOperatorPerson) {
  Person moveOperatorPerson = std::move(person);
  EXPECT_EQ("John", moveOperatorPerson.getFirstName());
  EXPECT_EQ("Doe", moveOperatorPerson.getLastName());
  EXPECT_EQ("JD", moveOperatorPerson.getInitials());
}

TEST_F(PersonTestSuite, GreaterThan) {
 Person obj{"Bob", "Bowe"};
 EXPECT_EQ(true, person > obj);
}

TEST_F(PersonTestSuite, LessThan) {
 Person obj{"Bob", "Howe"};
 EXPECT_EQ(true, person < obj);

}

TEST_F(PersonTestSuite, GreaterThanEqual) {
 Person obj{"Bob", "Doe"};
 EXPECT_EQ(true, person >= obj);

}

TEST_F(PersonTestSuite, LessThanEqual) {
 Person obj{"Bob", "Doe"};
 EXPECT_EQ(true, person <= obj);

}

TEST_F(PersonTestSuite, Equal) {
 Person obj{"Bob", "Doe"};
 EXPECT_EQ(true, person == obj);
}

TEST_F(PersonTestSuite, NotEqual) {
 Person obj{"Bob", "Howe"};
 EXPECT_EQ(true, person != obj);
}

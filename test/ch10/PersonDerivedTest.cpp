#include <gtest/gtest.h>
#include <Employee.hpp>
#include <Manager.hpp>
#include <Director.hpp>

using namespace ::testing;
class PersonDeriviedTestSuite : public Test {
protected:
  HR::Employee emp{"John", "Doe", "12345"};
  HR::Manager manager{ "Bob", "Wayne", "67890" };
  HR::Director director{ "Nick", "Cole", "13579" };
};

TEST_F(PersonDeriviedTestSuite, EmployeeInstance) {
  EXPECT_EQ("John", emp.getFirstName());
  EXPECT_EQ("Doe", emp.getLastName());
  EXPECT_EQ("JD", emp.getInitials());
  EXPECT_EQ("12345", emp.getEmployeeId());
}
TEST_F(PersonDeriviedTestSuite, ManagerInstance) {
  EXPECT_EQ("Bob", manager.getFirstName());
  EXPECT_EQ("Wayne", manager.getLastName());
  EXPECT_EQ("BW", manager.getInitials());
  EXPECT_EQ("67890", manager.getEmployeeId());
}

TEST_F(PersonDeriviedTestSuite, DirectorInstance) {
  EXPECT_EQ("Nick", director.getFirstName());
  EXPECT_EQ("Cole", director.getLastName());
  EXPECT_EQ("NC", director.getInitials());
  EXPECT_EQ("13579", director.getEmployeeId());
}

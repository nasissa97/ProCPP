#include <gtest/gtest.h>
#include "PersonBase.hpp"
#include "Employee.hpp"
#include "Manager.hpp"
#include "Director.hpp"

#include <exception>
#include <typeinfo>
#include <vector>

using namespace ::testing;
using namespace HR;
class PersonDeriviedTestSuite : public Test {
protected:
  Employee emp{"John", "Doe", "12345"};
  Manager manager{ "Bob", "Wayne", "67890" };
  Director director{ "Nick", "Cole", "13579" };

  std::string empExpected = std::format("{} {} {}", emp.getFirstName(), emp.getLastName(), emp.getEmployeeId());
  std::string managerExpected = std::format("{} {} {}", manager.getFirstName(), manager.getLastName(), manager.getEmployeeId());
  std::string directorExpected = std::format("{} {} {}", director.getFirstName(), director.getLastName(), director.getEmployeeId());

  std::vector<HR::PersonBase*> hr { &emp, &manager, &director };
  std::vector<std::string> expected { empExpected, managerExpected, directorExpected };

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

TEST_F(PersonDeriviedTestSuite, DerivedToString) {
  EXPECT_EQ(empExpected, emp.toString());
  EXPECT_EQ(managerExpected, manager.toString());
  EXPECT_EQ(directorExpected, director.toString());
}

TEST_F(PersonDeriviedTestSuite, PolymorphicTest) {
  size_t i{ 0 };
  for (const auto& obj : hr) {
    EXPECT_EQ(expected[i], obj->toString());
    i++;
  }
}

TEST_F(PersonDeriviedTestSuite, DemoteDirector) {
  try {
    Manager& newManager = dynamic_cast<Manager&>(director);
    EXPECT_EQ(directorExpected, newManager.toString());
  } catch( const std::bad_cast&) {
    FAIL();
  } catch( const std::exception&) {
    FAIL();
  }
  SUCCEED();
}

TEST_F(PersonDeriviedTestSuite, PromoteManager) {
  try {
    Director& newDirector = static_cast<Director&>(manager);
    EXPECT_EQ(managerExpected, newDirector.toString());
  } catch (const std::bad_cast&) {
    FAIL();
  } catch (const std::exception&) {
    FAIL();
  }
}

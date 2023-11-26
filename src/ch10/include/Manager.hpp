#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <string>

#include "Employee.hpp"

namespace HR {
class Manager : public Employee {
 public:
  Manager();
  Manager(std::string firstName, std::string lastName, std::string employeeId);
};
};  // namespace HR

#endif

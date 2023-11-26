#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <string>

#include "Employee.hpp"

namespace HR {
class Director : public Employee {
 public:
  Director();
  Director(std::string firstName, std::string lastName, std::string employeeId);
};
};  // namespace HR

#endif

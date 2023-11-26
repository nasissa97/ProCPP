#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "PersonBase.hpp"

namespace HR {
class Employee : public PersonBase {
 public:
  Employee();
  Employee(std::string firstName, std::string lastName, std::string employeeId);

  void setEmployeeId(std::string& getEmployeeId);
  const std::string& getEmployeeId() const;

 private:
  std::string m_employeeId;
};
};  // namespace HR

#endif

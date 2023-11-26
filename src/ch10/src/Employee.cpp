#include "Employee.hpp"

namespace HR {
Employee::Employee() : PersonBase(), m_employeeId{"N/A"} {
}

Employee::Employee(std::string firstName, std::string lastName, std::string employeeId)
    : PersonBase{std::move(firstName), std::move(lastName)}, m_employeeId{std::move(employeeId)} {
}

void Employee::setEmployeeId(std::string& employeeId) {
  m_employeeId = employeeId;
}

const std::string& Employee::getEmployeeId() const {
  return m_employeeId;
}

};  // namespace HR

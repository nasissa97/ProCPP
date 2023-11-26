#include "Manager.hpp"

namespace HR {
Manager::Manager() : Employee() {
}

Manager::Manager(std::string firstName, std::string lastName, std::string employeeId)
    : Employee(std::move(firstName), std::move(lastName), std::move(employeeId)) {
}

};  // namespace HR

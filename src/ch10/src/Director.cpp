#include "Director.hpp"

namespace HR {
Director::Director() : Employee() {
}

Director::Director(std::string firstName, std::string lastName, std::string employeeId)
    : Employee(std::move(firstName), std::move(lastName), std::move(employeeId)) {
}

};  // namespace HR

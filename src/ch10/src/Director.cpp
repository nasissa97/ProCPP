#include "Director.hpp"

namespace HR {
Director::Director() : Manager() {
}

Director::Director(std::string firstName, std::string lastName, std::string employeeId)
    : Manager(std::move(firstName), std::move(lastName), std::move(employeeId)) {
}

};  // namespace HR

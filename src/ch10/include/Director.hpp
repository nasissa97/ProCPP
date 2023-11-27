#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <string>

#include "Manager.hpp"

namespace HR {
class Director : public Manager {
 public:
  Director();
  Director(std::string firstName, std::string lastName, std::string employeeId);
};
};  // namespace HR

#endif

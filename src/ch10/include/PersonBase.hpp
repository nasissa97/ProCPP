#ifndef PERSONBASE_HPP
#define PERSONBASE_HPP

#include <compare>
#include <string>

namespace HR {
class PersonBase {
 public:
  PersonBase();
  PersonBase(std::string firstName);
  PersonBase(std::string firstName, std::string lastName);

  void setFirstName(const std::string& firstName);
  const std::string& getFirstName() const;

  void setLastName(const std::string& lastName);
  const std::string& getLastName() const;

  const std::string& getInitials() const;

  virtual const std::string toString() const;

  [[nodiscard]] bool operator==(const PersonBase& rhs) const;
  [[nodiscard]] std::partial_ordering operator<=>(const PersonBase& rhs) const;

 private:
  std::string m_firstName;
  std::string m_lastName;
  std::string m_initials;

  void updateInitials();
};
};  // namespace HR
#endif

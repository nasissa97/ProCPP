#include "PersonBase.hpp"

#include <format>
#include <utility>

namespace HR {
PersonBase::PersonBase() : m_firstName{"N/A"}, m_lastName{"N/A"}, m_initials{"N/A"} {
}

PersonBase::PersonBase(std::string firstName)
    : m_firstName{std::move(firstName)}, m_lastName{"N/A"}, m_initials{"N/A"} {
}

PersonBase::PersonBase(std::string firstName, std::string lastName)
    : m_firstName{std::move(firstName)}, m_lastName{std::move(lastName)} {
  m_initials = std::format("{}{}", m_firstName[0], m_lastName[0]);
}

void PersonBase::setFirstName(const std::string& firstName) {
  m_firstName = firstName;
  updateInitials();
}

const std::string& PersonBase::getFirstName() const {
  return m_firstName;
}

void PersonBase::setLastName(const std::string& lastName) {
  m_lastName = lastName;
  updateInitials();
}

const std::string& PersonBase::getLastName() const {
  return m_lastName;
}

void PersonBase::updateInitials() {
  m_initials = std::format("{}{}", m_firstName[0], m_lastName[0]);
}

const std::string& PersonBase::getInitials() const {
  return m_initials;
}

const std::string PersonBase::toString() const {
  return std::format("{} {}", m_firstName, m_lastName);
}

bool PersonBase::operator==(const PersonBase& rhs) const {
  return m_lastName == rhs.getLastName();
}

std::partial_ordering PersonBase::operator<=>(const PersonBase& rhs) const {
  return m_lastName <=> rhs.getLastName();
}

};  // namespace HR

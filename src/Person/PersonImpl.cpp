#include "PersonImpl.hpp"

#include <format>

#include "Person.hpp"

Person::Impl::Impl() = default;

Person::Impl::Impl(string firstName, string lastName)
    : Impl{move(firstName), move(lastName), format("{}{}", firstName[0], lastName[0])} {
}

Person::Impl::Impl(string firstName, string lastName, string initials)
    : m_firstName{move(firstName)}, m_lastName{move(lastName)}, m_initials{move(initials)} {
  m_initials = format("{}{}", m_firstName[0], m_lastName[0]);  // Bug with format
}

const string& Person::Impl::getFirstName() const {
  return m_firstName;
}

void Person::Impl::setFirstName(string firstName) {
  m_firstName = move(firstName);
}

const string& Person::Impl::getLastName() const {
  return m_lastName;
}

void Person::Impl::setLastName(string lastName) {
  m_lastName = move(lastName);
}

const string& Person::Impl::getInitials() const {
  return m_initials;
}

void Person::Impl::setInitials(string initials) {
  m_initials = move(initials);
}

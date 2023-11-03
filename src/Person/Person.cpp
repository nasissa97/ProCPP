#include "Person.hpp"

#include <format>
#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include "PersonImpl.hpp"

using namespace std;

Person::Person() : m_impl{make_unique<Impl>()} {
}

Person::Person(string firstName, string lastName)
    : m_impl{make_unique<Impl>(move(firstName), move(lastName))} {
}

Person::Person(string firstName, string lastName, string initials)
    : m_impl{make_unique<Impl>(move(firstName), move(lastName), move(initials))} {
}

Person::~Person() = default;
Person::Person(Person&&) noexcept = default;
Person& Person::operator=(Person&&) noexcept = default;

Person::Person(const Person& src) : m_impl{make_unique<Impl>(*src.m_impl)} {
}

Person& Person::operator=(const Person& rhs) {
  *m_impl = *rhs.m_impl;
  return *this;
}

const string& Person::getFirstName() const {
  return m_impl->getFirstName();
}

void Person::setFirstName(const string firstName) {
  m_impl->setFirstName(move(firstName));
}

const string& Person::getLastName() const {
  return m_impl->getLastName();
}
void Person::setLastName(const string lastName) {
  m_impl->setLastName(move(lastName));
}

const string& Person::getInitials() const {
  return m_impl->getInitials();
}

void Person::setInitials(const string initials) {
  m_impl->setInitials(move(initials));
}

bool Person::operator==(const Person& rhs) const {
  return m_impl->getLastName() == rhs.m_impl->getLastName();
}

partial_ordering Person::operator<=>(const Person& rhs) const {
  return m_impl->getLastName() <=> rhs.m_impl->getLastName();
}

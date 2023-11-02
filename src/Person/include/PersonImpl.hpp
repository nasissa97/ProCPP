#ifndef PERSONIMPLE_HPP
#define PERSONIMPLE_HPP

#include <string>

#include "Person.hpp"

using namespace std;

class Person::Impl {
 public:
  Impl();
  Impl(string firstName, string lastName);
  Impl(string firstName, string lastName, string initials);

  const string& getFirstName() const;
  void setFirstName(string firstName);

  const string& getLastName() const;
  void setLastName(string lastName);

  const string& getInitials() const;
  void setInitials(string initials);

 private:
  string m_firstName;
  string m_lastName;
  string m_initials;
};

#endif

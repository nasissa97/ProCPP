#include "include/Person.hpp"

Person::Person() {
 std::cout << "Default Ctor\n";
}


Person::Person(std::string_view firstName, std::string_view lastName) 
 : Person { firstName, lastName, "N/A" }
{
}

Person::Person(std::string_view firstName, std::string_view lastName, std::string_view initials)
   : m_firstName{firstName}, m_lastName{lastName}, m_initials{initials}
{
 std::cout << "Regular Ctor\n";
}

/*
Person::~Person() {
 std::cout << "Destructor called\n";
}

Person::Person(const Person& src) 
 : m_firstName {src.m_firstName}, m_lastName{src.m_lastName}
{
 std::cout << "Copy CTOR called\n";
}

Person& Person::operator=(const Person& rhs) {
 if(this == &rhs) {
  return *this;
 }
 m_firstName = rhs.m_firstName;
 m_lastName = rhs.m_lastName;
}
*/



std::string Person::getFirstName() const {
 return m_firstName;
}

void Person::setFirstName(std::string_view name) {
 m_firstName = name;
}

std::string Person::getLastName() const {
 return m_lastName;
}

void Person::setLastName(std::string_view name) {
 m_lastName = name;
}

std::string Person::getInitials() const {
 return m_initials;
}

void Person::setInitials(std::string_view initials) {
 m_initials = initials;
}

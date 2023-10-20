#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <string_view>

class Person {
 public:
  // Default ctor
  Person();
  // Ideal Ctor
  Person(std::string_view firstName,
         std::string_view lastName);

  Person(std::string_view firstName,
         std::string_view lastName,
         std::string_view initials);

  // Copy Ctor
  Person(const Person& src) = default;

  // Assignment Operator
  Person& operator=(const Person& rhs) = default;
  // DeCtor
  ~Person() = default;

  // Getter & Setter FirstName
  std::string getFirstName() const;

  void setFirstName(std::string_view name);

  // Getter & Setter LastName
  std::string getLastName() const;

  void setLastName(std::string_view name);

  // Getter & Setter Initials
  std::string getInitials() const;

  void setInitials(std::string_view initials);

 private:
  std::string m_firstName{""};
  std::string m_lastName{""};
  std::string m_initials{""};
};

#endif

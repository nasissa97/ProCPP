#ifndef PERSON_HPP
#define PERSON_HPP

#include <compare>
#include <memory>
#include <string>

class Person {
 public:
  // Default ctor

  Person();
  Person(std::string firstName, std::string lastName);
  Person(std::string firstName, std::string lastName, std::string initials);
  ~Person();
  Person(const Person& src);
  Person(Person&&) noexcept;
  Person& operator=(const Person& rhs);
  Person& operator=(Person&&) noexcept;

  const std::string& getFirstName() const;
  void setFirstName(std::string firstName);

  const std::string& getLastName() const;
  void setLastName(std::string lastName);

  const std::string& getInitials() const;
  void setInitials(std::string initials);

  [[nodiscard]] bool operator==(const Person& rhs) const;
  [[nodiscard]] std::partial_ordering operator<=>(const Person& rhs) const;

 private:
  class Impl;
  std::unique_ptr<Impl> m_impl;
};

#endif

#include <format>
#include <iostream>
#include <memory>

#include "Person.hpp"

using namespace std;

Person createPerson() {
  cout << "Creating a person" << endl;
  return Person{"Move", "Constructor"};
}

int main() {
  Person person{"John", "Doe"};
  cout << format("The initials of {} {} are {}.\n", person.getFirstName(), person.getLastName(),
                 person.getInitials());

  cout << format("{} + {} = {}\n", 2, 3, 2 + 3);
}

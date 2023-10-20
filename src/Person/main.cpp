#include <iostream>
#include <memory>

#include "Person.hpp"

using namespace std;

int main() {
  // Regualar Class
  std::cout << "Stack Based Person\n";
  Person p1{"Nas", "Issa"};
  cout << p1.getFirstName() << " " << p1.getLastName() << " "
       << p1.getInitials() << endl;
  p1.setFirstName("Nasser");
  cout << p1.getFirstName() << endl;
  p1.setLastName("Pal");
  cout << p1.getLastName() << endl;
  cout << p1.getFirstName() << " " << p1.getLastName()
       << p1.getInitials() << endl;

  // Person class using a raw pointer
  std::cout << "Raw Pointer\n";
  Person* p2{new Person{"Ehasn", "Bitch"}};
  cout << p2->getFirstName() << " " << p2->getLastName()
       << endl;

  // Person class using smart pointer
  std::cout << "Smart Pointer\n";
  auto p3{std::make_unique<Person>("Aaron", "Parra")};
  cout << p3->getFirstName() << " " << p3->getLastName()
       << endl;

  Person people[3];

  // Copy Ctor
  std::cout << "Copy\n";
  Person p5{p1};
  cout << p5.getFirstName() << " " << p5.getLastName()
       << endl;

  // Assignment
  std::cout << "Assignment\n";
  auto p6 = p1;
  cout << p6.getFirstName() << " " << p6.getLastName()
       << endl;

  // Initials
  std::cout << "Initials\n";
  Person p7{"Amal", "Issa", "AI"};
  cout << p7.getFirstName() << " " << p7.getLastName() << " "
       << p7.getInitials() << endl;

  return 0;
}

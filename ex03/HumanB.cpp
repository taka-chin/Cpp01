#include "HumanB.hpp"
#include <iostream>
#include <string>

const std::string HumanB::getName() { return name_; }

void HumanB::setName(std::string name) { name_ = name; }

void HumanB::attack() {
  std::string type;
  std::string name;

  type = weapon.getType();
  name = getName();
  std::cout << name << "attacks with their" << type << std::endl;
}

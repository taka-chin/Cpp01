#include "Zombie.hpp"
#include <iostream>

const std::string &Zombie::getName() { return name_; }

void Zombie::setName(std::string name) { name_ = name; }

void Zombie::announce(void) {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

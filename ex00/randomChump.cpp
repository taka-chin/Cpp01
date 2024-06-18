#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name) {
  Zombie *newZ = newZombie(name);
  newZ->announce();
  delete newZ;
}

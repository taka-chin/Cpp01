#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  int i = 0;
  Zombie *newZombie = new Zombie[N];
  while (i < N) {
    newZombie[i].setName(name);
    i++;
  }
  return (&newZombie[0]);
}

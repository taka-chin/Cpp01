#ifndef CPP01_EX03_HUMANB_H_
#define CPP01_EX03_HUMANB_H_
#include "Weapon.hpp"
#include <string>

class HumanB {
private:
  std::string name_;
  Weapon weapon;

public:
  HumanB(std::string name, Weapon weapon);
  void attack();
  const std::string getName(void);
  void setName(std::string name);
};
#endif

#ifndef CPP01_EX03_Zombie_H_
#define CPP01_EX03_Zombie_H_

#include <string>

class Weapon {
private:
  std::string type;

public:
  const std::string getType(void);
  void setType(std::string type);
};
#endif

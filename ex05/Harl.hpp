#ifndef CPP01_EX05_HARL_H_
#define CPP01_EX05_HARL_H_
#include <string>

class Harl {
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  void complain(std::string level);
};

#endif

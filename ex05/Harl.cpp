#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) { std::cout << "DEBUG" << std::endl; };

void Harl::info(void) { std::cout << "INFO" << std::endl; };

void Harl::warning(void) { std::cout << "WARNING" << std::endl; };

void Harl::error(void) { std::cout << "ERROR" << std::endl; };

void Harl::complain(std::string level) {
  typedef void (*F)(void);
  F func = &debug;
}

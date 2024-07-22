#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);
    void highFivesGuys(void);
};

#endif
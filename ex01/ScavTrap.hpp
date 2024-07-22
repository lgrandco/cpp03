#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    bool is_guarding;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap&);
    ScavTrap& operator=(const ScavTrap&);
    ~ScavTrap();
    void guardGate(void);
    void attack(const std::string& target);
};

#endif

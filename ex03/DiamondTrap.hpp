#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap&);
    DiamondTrap& operator=(const DiamondTrap&);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI(void);
};

#endif

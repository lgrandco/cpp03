#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("default") {
    ClapTrap::name = name + "_clap_name";
    print_color("Default DiamondTrap constructor called");
}

DiamondTrap::DiamondTrap(std::string name) : name(name) {
    ClapTrap::name = name + "_clap_name";
    hit_points = FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
    print_color("Default DiamondTrap constructor called");
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
    *this = src;
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
    name = src.name;
    return *this;
}

DiamondTrap::~DiamondTrap() { print_color("Destructor DiamondTrap called"); }

void DiamondTrap::attack(const std::string& target) { ScavTrap::attack(target); }

void DiamondTrap::whoAmI() {
    print_color("My name is " + name + " and my ClapTrap name is " + ClapTrap::name);
}

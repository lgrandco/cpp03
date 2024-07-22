#include "FragTrap.hpp"

FragTrap::FragTrap() {
    print_color("Default FragTrap constructor called");
    name = "Default";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {
    print_color("Default FragTrap constructor called");
    this->name = name;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::~FragTrap() { print_color("Destructor FragTrap called"); }

FragTrap::FragTrap(const FragTrap& src) {
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
    std::cout << "Copy assignement operator called" << std::endl;
    name = src.get_name();
    return *this;
}

void FragTrap::highFivesGuys(void) { print_color(name + " is requesting a high five"); }

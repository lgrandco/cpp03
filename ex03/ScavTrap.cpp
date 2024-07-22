#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : is_guarding(false) {
    print_color("Default ScavTrap constructor called");
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : is_guarding(false) {
    print_color("Default ScavTrap constructor called");
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap() { print_color("Destructor ScavTrap called"); }

ScavTrap::ScavTrap(const ScavTrap& src) {
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    std::cout << "Copy assignement operator called" << std::endl;
    name = src.get_name();
    return *this;
}

void ScavTrap::guardGate(void) {
    if (is_guarding) {
        print_color(name + " is already guarding the gate");
    } else {
        print_color(name + " has entered in gate keeper mode");
        is_guarding = true;
    }
}

void ScavTrap::attack(const std::string& target) {
    if (!hit_points) {
        print_color(name + "(ScavTrap) cannot attack, no hit points left");
    } else if (!energy_points) {
        print_color(name + "(ScavTrap) cannot attack, no energy left");
    } else {
        print_color(name + "(ScavTrap) has attacked " + target);
        energy_points--;
    }
}

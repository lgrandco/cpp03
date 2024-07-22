#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default name"), hit_points(10), energy_points(10), attack_damage(0) {
    print_color("Default constructor called");
}

ClapTrap::ClapTrap(std::string name)
    : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    print_color("Default constructor called");
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
    std::cout << "Copy assignement operator called" << std::endl;
    name = src.get_name();
    return *this;
}

ClapTrap::~ClapTrap() { print_color("Destructor called"); }

void ClapTrap::attack(const std::string& target) {
    if (!hit_points) {
        print_color(name + " cannot attack, no hit points left");
    } else if (!energy_points) {
        print_color(name + " cannot attack, no energy left");
    } else {
        print_color(name + " has attacked " + target);
        energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!hit_points) {
        print_color(name + " is already dead");
        return;
    }
    if (amount > hit_points) hit_points = 0;
    else hit_points -= amount;
    std::cout << get_color() << name + " has taken " << amount << " damage and now has "
              << hit_points << " HP left" << ANSI_RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energy_points) {
        energy_points--;
        hit_points += amount;
        std::cout << get_color() << name + " has been repaired by " << amount << " and now has "
                  << hit_points << " it points left" << ANSI_RESET << std::endl;
    } else print_color(name + " cannot be repaired, no energy left");
}

void ClapTrap::set_hit_points(size_t _hit_points) { this->hit_points = _hit_points; }

void ClapTrap::set_energy_points(size_t _energy_points) { this->energy_points = _energy_points; }

void ClapTrap::set_attack_damage(size_t _attack_damage) { this->attack_damage = _attack_damage; }

unsigned int ClapTrap::get_attack_damage() const { return attack_damage; }

unsigned int ClapTrap::get_hit_points() const { return hit_points; }

unsigned int ClapTrap::get_energy_points() const { return energy_points; }

std::string ClapTrap::get_name() const { return name; }

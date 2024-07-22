#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "colors.hpp"

class ClapTrap {
private:
    std::string name;
    size_t hit_points;
    size_t energy_points;
    size_t attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap&);
    ClapTrap& operator=(const ClapTrap&);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void set_hit_points(size_t hit_points);
    void set_energy_points(size_t energy_points);
    void set_attack_damage(size_t attack_damage);
    std::string get_name(void) const;
    unsigned int get_attack_damage() const;
    unsigned int get_hit_points() const;
    unsigned int get_energy_points() const;
};

#endif

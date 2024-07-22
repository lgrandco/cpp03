#include "FragTrap.hpp"

int main() {
    srand(time(NULL));
    FragTrap trap1("Trap1");
    FragTrap trap2("Trap2");
    std::cout << trap1.get_attack_damage() << std::endl;
    std::cout << trap1.get_hit_points() << std::endl;
    std::cout << trap1.get_energy_points() << std::endl;

    trap1.set_hit_points(100);
    trap1.set_energy_points(rand() % 200 + 200);
    trap1.set_attack_damage(rand() % 20 + 5);
    trap2.set_hit_points(100);
    trap2.set_energy_points(rand() % 200 + 200);
    trap2.set_attack_damage(rand() % 20 + 5);

    while (trap1.get_hit_points() && trap2.get_hit_points()) {
        trap1.attack("Trap2");
        trap2.takeDamage(trap1.get_attack_damage());
        if (!trap2.get_hit_points()) break;
        trap2.attack("Trap1");
        trap1.takeDamage(trap2.get_attack_damage());
        trap1.beRepaired(rand() % 10 + 1);
        trap2.beRepaired(rand() % 10 + 1);
    }
    print_color(trap1.get_hit_points() ? "Trap1 has won the game!" : "Trap2 has won the game!");
    trap1.get_hit_points() ? trap1.highFivesGuys() : trap2.highFivesGuys();

    return 0;
}

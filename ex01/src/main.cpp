#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"


int main() {
	ScavTrap a;
	a = ScavTrap("Feca");
	ScavTrap b = a;
	b.print_infos();
	b.takeDamage(99);
	b.guardGate();
	for(int i = 0; i < 51; i++)
		b.attack("Eniripsa");
	b.print_infos();
	b.takeDamage(2);
	b.print_infos();
	b.guardGate();
	b.attack("Eniripsa");
	b.beRepaired(999);
	return 0;
}

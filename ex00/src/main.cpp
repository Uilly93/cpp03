#include "../includes/ClapTrap.hpp"

int main() {
	ClapTrap a("Jean");
	ClapTrap b = a;
	a.set_damages(3);
	a.beRepaired(10);
	a.print_infos();
	a.takeDamage(19);
	a.attack("bob");
	a.print_infos();
	// a.takeDamage(9999);
	a.attack("bob");
	a.beRepaired(999);
	// a.takeDamage(1);
	a.print_infos();
	a.beRepaired(999);
	a.beRepaired(999);
	a.beRepaired(999);
	a.beRepaired(999);
	a.beRepaired(999);
	a.beRepaired(999);
	a.beRepaired(999);
	a.print_infos();
	a.attack("bob");
	a.attack("bob");
	a.attack("bob");
	return 0;
}
#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"


int main() {
std::cout << NGREEN << "------------Constructors Calling-----------" << RESET << std::endl;
	ClapTrap Clap("Iop");
	ScavTrap Scav("Feca");
	std::cout << NGREEN << "------------ClapTrap tests-----------" << RESET << std::endl;
	Clap.print_infos();
	for(int i = 0; i < 11; i++)
	{
		std::cout << NBLUE << "ATTACK N." << i + 1 << " " << RESET;
		Clap.attack("Osamodas");
	}
	Clap.takeDamage(9);
	Clap.print_infos();
	Clap.beRepaired(9);
	Clap.takeDamage(10);
	// Clap.highFivesGuys();
	// Clap.guardGate();
	Clap.print_infos();
	Clap.takeDamage(1);
	Clap.beRepaired(10);
	Clap.attack("Osamodas");
	std::cout << NGREEN << "------------ScavTrap tests-----------" << RESET << std::endl;
	Scav.print_infos();
	Scav.takeDamage(99);
	Scav.guardGate();
	Scav.attack("Eniripsa");
	// Scav.highFivesGuys();
	Scav.print_infos();
	Scav.takeDamage(2);
	Scav.print_infos();
	Scav.guardGate();
	Scav.attack("Eniripsa");
	Scav.beRepaired(999);
	return 0;
}

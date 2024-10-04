#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"


int main() {
	ScavTrap a;
	a = ScavTrap("Jean");
	ScavTrap b = a;
	b.print_infos();
	b.takeDamage(99);
	b.guardGate();
	b.attack("bob");
	b.print_infos();
	// b.takeDamage(9999);
	b.attack("bob");
	b.beRepaired(999);
	// b.takeDamage(1);
	b.print_infos();
	b.takeDamage(1000);
	b.print_infos();
	return 0;
}

// #include "../includes/ClapTrap.hpp"
// #include "../includes/ScavTrap.hpp"
// #include "../includes/colors.hpp"

// int main() {
//     std::string gangplank = "Gangplank";
//     std::string illaoi = "Illaoi";
//     std::string ekko = "Ekko";

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Creating instances of each class." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     ScavTrap Gangplank(gangplank);
//     ClapTrap Illaoi(illaoi);
//     ClapTrap Ekko(ekko);

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Gangplank reduced Ekko's hit points to 0." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     for (int i = 0; i < 6; i++) {
//         Gangplank.attack(ekko);
//         Ekko.takeDamage(20);
//     }

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Ekko will try to heal himself but has 0 hit points." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     Ekko.beRepaired(20);

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Illaoi will attack 11 times but she has only 10 energy points." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     for (int i = 0; i < 11; i++) {
//         Illaoi.attack(gangplank);
//         Gangplank.takeDamage(0);
//     }

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Gangplank heals herself." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     Gangplank.takeDamage(5);
//     Gangplank.beRepaired(5);

//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     std::cout << NGREEN << "Gangplank uses guardGate." << RESET << std::endl;
//     std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
//     Gangplank.guardGate();
// }
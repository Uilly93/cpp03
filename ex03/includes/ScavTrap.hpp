#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
// #include <iostream>

class ScavTrap : virtual public ClapTrap {
	public :
		//Constructor:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & src);
		//Destructor:
		~ScavTrap();
		//Operator Overload:
		ScavTrap &operator=(ScavTrap const & rhs);
		//Methods:
		void guardGate();
		void attack(const std::string& target);
};

#endif

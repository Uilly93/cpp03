#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
// #include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
	public :
		//Constructor:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & src);
		//Destructor:
		~DiamondTrap();
		//Operator Overload:
		DiamondTrap &operator=(DiamondTrap const & rhs);
		//Methods:
		void attack(const std::string& target);
		void whoAmI();
		
		private:
			std::string _name;
};

#endif

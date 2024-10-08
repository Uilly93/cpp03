#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
	public :
		//Constructor:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap & src);
		//Destructor:
		~FragTrap();
		//Operator Overload:
		FragTrap &operator=(FragTrap const & rhs);
		//Methods:
		void highFivesGuys(void);
};

#endif

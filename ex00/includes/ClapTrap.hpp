#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include "colors.hpp"

class ClapTrap{
	public:
	//Constructor:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		//Destructor:
		~ClapTrap();
		//Operator Overload:
		ClapTrap &operator=(ClapTrap const & rhs);
		//Member functions:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	print_infos() const ;
		void	set_damages(unsigned int amount);
		int		get_damages() const ;


	private:
		std::string _name;
		unsigned int _HitPoint;
		unsigned int _EnergyPoint;
		unsigned int _AttackDamage;
};

#endif
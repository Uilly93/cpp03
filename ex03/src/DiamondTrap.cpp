#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap() ,FragTrap(), ScavTrap() {
	std::cout << GREEN << "DiamondTrap default constructor called" << RESET << std::endl;
	_name = "_clap_name";
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"){
	std::cout << GREEN << "DiamondTrap constructor called with attribute name : " << name << RESET << std::endl;
	_name = name;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 30;
}
DiamondTrap::DiamondTrap(const DiamondTrap & src): ClapTrap(src), FragTrap(src), ScavTrap(src){
	std::cout << BLUE << "DiamondTrap copy constructor called" << RESET << std::endl;
	*this = src;
}
//Destructor:
DiamondTrap::~DiamondTrap(){
	std::cout << RED << "DiamondTrap destrcutor called" << RESET << std::endl;
}
//Operator Overload:
DiamondTrap &DiamondTrap::operator=(DiamondTrap const & rhs){
		std::cout << PURPLE << "DiamondTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_AttackDamage = rhs._AttackDamage;
		this->_EnergyPoint = rhs._EnergyPoint;
		this->_HitPoint = rhs._HitPoint;
	}
	return *this;
}

//Methods:
void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	if(_HitPoint > 0){
		std::cout << NYELLOW << "Hi, my name is, what? My name is, who? My name is, chka-chka, " << _name << " and " << getName() << RESET << std::endl;
	}
	else 
		std::cout << RED << _name << " can't say his name, he is dead" << RESET << std::endl;
}
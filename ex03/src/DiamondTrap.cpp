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
	if(_EnergyPoint > 0 && _HitPoint > 0){
		std::cout << YELLOW << "DiamondTrap " << _name;
		std::cout << " Attack " << target << ", Causing ";
		std::cout << _AttackDamage << " points of damages !" << RESET << std::endl;
		_EnergyPoint--;
	}
	else if (_EnergyPoint <= 0)
		std::cout << RED << _name << " has not enough Energy Points !" << RESET << std::endl;
	else if(_HitPoint <= 0)
		std::cout << RED << _name << " is dead, he can't attack" << RESET << std::endl;
}

// void DiamondTrap::highFivesGuys(){
// 	if(_HitPoint > 0){
// 		std::cout << NYELLOW << _name << " Wants to High Five 🙏 " << RESET << std::endl;
// 	}
// 	else 
// 		std::cout << RED << _name << " can't High Five, he is dead" << RESET << std::endl;
// }
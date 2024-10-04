#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << GREEN << "ScavTrap default constructor called" << RESET << std::endl;
	_name = "";
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << GREEN << "ScavTrap constructor called" << RESET << std::endl;
	_name = name;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap & src): ClapTrap(src){
	std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
	*this = src;
}
//Destructor:
ScavTrap::~ScavTrap(){
	std::cout << RED << "ScavTrap destrcutor called" << RESET << std::endl;
}
//Operator Overload:
ScavTrap &ScavTrap::operator=(ScavTrap const & rhs){
		std::cout << PURPLE << "ScavTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_AttackDamage = rhs._AttackDamage;
		this->_EnergyPoint = rhs._EnergyPoint;
		this->_HitPoint = rhs._HitPoint;
	}
	return *this;
}
//Methods:
void ScavTrap::guardGate(){
	if(_HitPoint > 0){
		std::cout << NYELLOW << _name << " use Rempart 🛡️" << RESET << std::endl;
	}
	else 
		std::cout << RED << _name << " can't use Rempart 🛡️, he is dead" << RESET << std::endl;
}
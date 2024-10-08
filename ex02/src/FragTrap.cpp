#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << GREEN << "FragTrap default constructor called" << RESET << std::endl;
	_name = "";
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << GREEN << "FragTrap constructor called with attribute name : " << name << RESET << std::endl;
	_name = name;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}
FragTrap::FragTrap(const FragTrap & src): ClapTrap(src){
	std::cout << BLUE << "FragTrap copy constructor called" << RESET << std::endl;
	*this = src;
}
//Destructor:
FragTrap::~FragTrap(){
	std::cout << RED << "FragTrap destrcutor called" << RESET << std::endl;
}
//Operator Overload:
FragTrap &FragTrap::operator=(FragTrap const & rhs){
		std::cout << PURPLE << "FragTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_AttackDamage = rhs._AttackDamage;
		this->_EnergyPoint = rhs._EnergyPoint;
		this->_HitPoint = rhs._HitPoint;
	}
	return *this;
}
//Methods:
void FragTrap::highFivesGuys(){
	if(_HitPoint > 0){
		std::cout << NYELLOW << _name << " Wants to High Five 🙏 " << RESET << std::endl;
	}
	else 
		std::cout << RED << _name << " can't High Five, he is dead" << RESET << std::endl;
}
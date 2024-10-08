#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
	std::cout << GREEN << "ClapTrap Default Constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
	std::cout << GREEN << "ClapTrap Constructor called with attribute name : " << name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){
	std::cout << BLUE << "ClapTrap Copy Constructor called" << RESET << std::endl;
	*this = src; 
}

ClapTrap::~ClapTrap(){
	std::cout << RED << "ClapTrap Destructor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << PURPLE << "ClapTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_AttackDamage = rhs._AttackDamage;
		this->_EnergyPoint = rhs._EnergyPoint;
		this->_HitPoint = rhs._HitPoint;
	}
	return *this;
}

void	ClapTrap::set_damages(unsigned int amount){
	_AttackDamage = amount;
}

int ClapTrap::get_damages() const {
	return _AttackDamage;
}


void	ClapTrap::attack(const std::string& target){
	if(_EnergyPoint > 0 && _HitPoint > 0){
		std::cout << YELLOW << "ClapTrap " << _name;
		std::cout << " Attack " << target << ", Causing ";
		std::cout << _AttackDamage << " points of damages !" << RESET << std::endl;
		_EnergyPoint--;
	}
	else if (_EnergyPoint <= 0)
		std::cout << RED << _name << " has not enough Energy Points !" << RESET << std::endl;
	else if(_HitPoint <= 0)
		std::cout << RED << _name << " is dead, he can't attack" << RESET << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount){
	if(_HitPoint > 0){
		std::cout << RED << _name << " Took " << amount << " damages" << RESET << std::endl;
		if (amount >= _HitPoint)
			_HitPoint = 0;
		else
			_HitPoint -= amount;
		if(_HitPoint == 0)
			std::cout << NRED << _name <<" Died !" << RESET << std::endl;
	}
	else
		std::cout << NRED << _name <<" is already dead !" << RESET << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount){
	if(_EnergyPoint > 0 && _HitPoint > 0){
		std::cout << GREEN << _name << " repaired itself for " << amount << " Health points" <<RESET << std::endl;
		_EnergyPoint--;
		_HitPoint += amount;
		std::cout << GREEN << _name << " has now " << _HitPoint << " Health points " << RESET << std::endl;
	}
	else if (_HitPoint <= 0)
		std::cout << RED << _name << " is dead, he can't repair !" << RESET << std::endl;
	else if (_EnergyPoint <= 0)
		std::cout << RED << _name << " has not enough Energy Points !" << RESET << std::endl;
}

void	ClapTrap::print_infos() const {
	std::cout << NBLUE << "Hit Points remaining: " << _HitPoint << RESET << std::endl;
	std::cout << NBLUE << "Energy Points remaining: " << _EnergyPoint << RESET << std::endl;
	std::cout << NBLUE << "Attack Damage is : " << _AttackDamage << RESET << std::endl;
}


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_type = "ScavTrap";
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << this->_type + " with no arguments constructor called for " +  this->_name + ".\n";
}

ScavTrap::~ScavTrap() {
	std::cout << this->_type + " destructor called for " +  this->_name + ".\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_type = "ScavTrap";
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << this->_type + " constructor called for " +  this->_name + ".\n";
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	std::cout << src._type + " copy constructor called for " +  src._name + ".\n";
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << rhs._type + " copy assignment operator called for " +  rhs._name + ".\n";
	this->_type = rhs.getType();
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHit();
	this->_energy_points = rhs.getEnergy();
	this->_attack_damage = rhs.getAttack();

	return (*this);
}

void ScavTrap::guardGate(void) {
	std::cout << this->_type + " " + this->_name + " is now in Gate keeper mode.\n";
}

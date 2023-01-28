#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_type = "FragTrap";
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << this->_type + " with no arguments constructor called for " +  this->_name + ".\n";
}

FragTrap::~FragTrap() {
	std::cout << this->_type + " destructor called for " +  this->_name + ".\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_type = "FragTrap";
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << this->_type + " constructor called for " +  this->_name + ".\n";
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap() {
	std::cout << src._type + " copy constructor called for " +  src._name + ".\n";
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
	std::cout << rhs._type + " copy assignment operator called for " +  rhs._name + ".\n";
	this->_type = rhs.getType();
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHit();
	this->_energy_points = rhs.getEnergy();
	this->_attack_damage = rhs.getAttack();

	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->_type + " " + this->_name + " says: \"High five!\".\n";
}

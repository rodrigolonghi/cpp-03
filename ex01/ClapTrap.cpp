#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
	_type("ClapTrap"),
	_name("Unknown"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0) {
		std::cout << this->_type + " with no arguments constructor called for " +  this->_name + ".\n";
}

ClapTrap::~ClapTrap() {
	std::cout << this->_type + " destructor called for " +  this->_name + ".\n";
}

ClapTrap::ClapTrap(std::string name) : 
	_type("ClapTrap"),
	_name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0) {
		std::cout << this->_type + " constructor called for " +  this->_name + ".\n";
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << src._type + " copy constructor called for " +  src._name + ".\n";
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << rhs._type + " copy assignment operator called for " +  rhs._name + ".\n";
	this->_type = rhs.getType();
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHit();
	this->_energy_points = rhs.getEnergy();
	this->_attack_damage = rhs.getAttack();

	return (*this);
}

std::string ClapTrap::getType() const {
	return (this->_type);
}

std::string	ClapTrap::getName() const {
	return (this->_name);
}

int	ClapTrap::getHit() const {
	return (this->_hit_points);
}

int	ClapTrap::getEnergy() const {
	return (this->_energy_points);
}

int	ClapTrap::getAttack() const {
	return (this->_attack_damage);
}

void	ClapTrap::setType(std::string type) {
	this->_type = type;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHit(int hit) {
	this->_hit_points = hit;
}

void	ClapTrap::setEnergy(int energy) {
	this->_energy_points = energy;
}

void	ClapTrap::setAttack(int attack) {
	this->_attack_damage = attack;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		std::cout << this->_type + " " + this->_name + " attacks " + target + ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	} else {
		std::cout << this->_type + " " + this->_name + " is unable to attack " + target + "!\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hit_points -= amount;
	std::cout << this->_type + " " + this->_name + " takes " << amount << " points of damage! Now " + this->_name + " has " << this->_hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << this->_type + " " + this->_name + " has repaired " << amount << " hit points to itself. Now " + this->_name + " has " << this->_hit_points << " hit points.\n";
	} else {
		std::cout << this->_type + " " + this->_name + " is unable to reapair itself!\n";
	}
}

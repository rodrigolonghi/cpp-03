#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	_type;
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &rhs);

		std::string	getType(void) const;
		std::string	getName(void) const;
		int			getHit(void) const ;
		int			getEnergy(void) const ;
		int			getAttack(void) const ;
		void		setType(std::string);
		void		setName(std::string);
		void		setHit(int);
		void		setEnergy(int);
		void		setAttack(int);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

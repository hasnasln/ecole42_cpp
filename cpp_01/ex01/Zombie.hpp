#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string  _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void	setName(std::string name);
		void	annonunce(void);
};

void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name );

#endif
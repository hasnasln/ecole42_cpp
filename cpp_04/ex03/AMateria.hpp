#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria 
{
	protected:
		std::string _type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		void operator=(const AMateria &other);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
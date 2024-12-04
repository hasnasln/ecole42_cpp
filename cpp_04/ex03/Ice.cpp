#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const std::string type): AMateria(type)
{
}

Ice::Ice(const Ice &other): AMateria(other)
{
}

Ice Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << BLUE << "Cat default constructre called" << RESET << std::endl;
}
Cat::~Cat()
{
	delete brain;
	std::cout << BLUE << "Cat destructre called" << RESET << std::endl;
}
Cat::Cat(const std::string type): Animal(type)
{
	brain = new Brain();
	std::cout << BLUE << "Cat constructre called" << RESET << std::endl;
}
Cat::Cat(const Cat &other): Animal(other)
{
	brain = new Brain();
	*brain = *other.brain;
	std::cout << BLUE << "Cat coopy constracture called" << RESET << std::endl;
}
Cat Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << BLUE << "Cat assignment operator called" << RESET << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BLUE << "Miavvvvv !!" << RESET << std::endl;
}

void Cat::print_adress() const
{
	std::cout << "Brain adress: " << brain << std::endl;
}
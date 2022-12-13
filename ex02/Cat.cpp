#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Constructor called" << std::endl;
	this->type = "Cat";
	this->_cervelet = new Brain ();
	return;
}

Cat::Cat( Cat const & )
{
	return;
}

Cat const & Cat::operator=( Cat const & cp )
{
	this->type = cp.type;
	return *this;
}

Cat::~Cat( void )
{
	std::cout << "Destructor called" << std::endl;
	delete this->_cervelet;
	return;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaou" << std::endl;
	return;
}

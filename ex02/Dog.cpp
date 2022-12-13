#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Constructor called" << std::endl;
	this->type = "Dog";
	this->_cervelet = new Brain ();
	return;
}

Dog::Dog( Dog const & )
{
	return;
}

Dog const & Dog::operator=( Dog const & cp )
{
	this->type = cp.type;
	return *this;
}

Dog::~Dog( void )
{
	std::cout << "Destructor called" << std::endl;
	delete this->_cervelet;
	return;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waff" << std::endl;
	return;
}

#include "Brain.hpp"

Brain::Brain( void )
{
	this->ideas = new std::string [100];
	return;
}

Brain::Brain( Brain const & )
{
	return;
}

Brain & Brain::operator=( Brain const & egal )
{
	this->ideas = egal.ideas;
	return *this;
}

Brain::~Brain( void )
{
	delete [] ideas;
	return;
}

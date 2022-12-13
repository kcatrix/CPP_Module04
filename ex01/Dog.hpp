#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog( void );
		Dog( Dog const & ref);
		Dog const & operator=( Dog const & egal );
		~Dog( void );

		virtual void	makeSound( void ) const;

	private :
		Brain * _cervelet;
};

#endif

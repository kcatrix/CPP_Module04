#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public :
		Brain( void );
		Brain( Brain const & );
		Brain & operator=( Brain const & egal );
		~Brain( void );

		std::string *ideas;
};

#endif

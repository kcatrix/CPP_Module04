#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	int	b = 4;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal p = Animal();
	Animal a = p; //cp superficielle 
	Animal c = Animal(p); //cp profonde

	p.setType("kevin");
	p.getType();
	std::cout << p.getType() << "\n";
	std::cout << p.getType() << "\n";
	std::cout << p.getType() << "\n";
	
	delete j;//should not create a leak
	delete i;

	Animal *k[b];

	for (int a = 0; a != b; a++)
	{
		if (a < b / 2)
			k[a] = new Dog();
		else
			k[a] = new Cat();
	}
	for (int a = 0; a != b; a++)
		delete k[a];
	return 0;
}	

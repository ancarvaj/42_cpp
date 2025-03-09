#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main(void)
{
	Animal a;
	Cat c;
	Dog d;
	const Animal* a1 = &a;
	const Animal* a2 = &d;
	const Animal* a3 = &c;

	std::cout << a1->getType() << std::endl;
	std::cout << a2->getType() <<  std::endl;
	std::cout << a3->getType() << std::endl;
	
	a1->makeSound();
	a2->makeSound();
	a3->makeSound();
	
	return 0;
}

int mai1n(void)
{
	WrongAnimal wa1;
	WrongCat wc;

	const WrongAnimal* wa2 = &wa1;
	const WrongAnimal* wa3 = &wc;
	
	std::cout << wa2->getType() << std::endl;
	std::cout << wa3->getType() << std::endl;
	
	wa2->makeSound();
	wa3->makeSound();

	return 0;
}

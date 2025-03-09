#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main1()
{
	AAnimal* a1 = new Dog();
	AAnimal* a2 = new Cat();
	std::cout << a1->getType() << std::endl;
	std::cout << a2->getType() << std::endl;
	a1->makeSound();
	a2->makeSound();

	delete a1;
	delete a2;
	return 0;
}


int main()
{
	Dog d1;
	{
		Dog d2;

		d2.setIdeas("hola", 0);
		
		d1 = d2;
	}
	std::cout << d1.getIdeas(0)<< std::endl;
	return 0;
}

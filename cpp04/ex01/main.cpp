#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main1()
{
	Animal *animal[10];

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		if (i<5)
			animal[i] = new Dog();
		if (i > 4 && i<10)
			animal[i] = new Cat();
	}

	for (int i = 0; i  < 10; i++)
	{
		std::cout << i << std::endl;
		delete animal[i];
	}

	return 0;
}

int  main()
{
	Cat c1;
	Cat c2;


	c1.setIdeas("tengo una idea", 0);
	c2 = c1;
	c1.setIdeas("no tengo una idea", 0);
	std::cout << "idea de c2 que es una copia de c1 " + c2.getIdeas(0) << std::endl;
	std::cout << "idea de c1 que es el original " + c1.getIdeas(0) << std::endl;

}

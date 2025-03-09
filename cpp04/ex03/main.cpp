#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

/*int main()
{
	IMateriaSource* src = new MateriaSource();
	
	//src->learnMateria(new Ice());
	

	src->learnMateria(new Cure());
	
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp1;
	
	tmp1 = src->createMateria("cure");
	
	me->equip(tmp1);
	
	AMateria *tmp;
	
	tmp = src->createMateria("cure");
	
	me->equip(tmp);
	
	tmp = src->createMateria("ice");
	
	me->equip(tmp);
	
	tmp = src->createMateria("ice");
	
	me->equip(tmp);
	
	me->unequip(0);
	
	tmp = src->createMateria("cure");
	
	me->equip(tmp);
	
	AMateria *tmp2;

	tmp2 = src->createMateria("ice");

	me->equip(tmp2);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	
	delete tmp1;
	delete tmp2;
	delete bob;
	delete me;
	delete src;

	return 0;
}*/
/*
int main()
{
	MateriaSource ms;

	IMateriaSource *ims = &ms;

	ims->learnMateria(new Ice());

	MateriaSource ms1 = ms;
	
	ims->learnMateria(new Cure());

	IMateriaSource *ims1 = &ms1;


	AMateria *am = ims1->createMateria("cure");
	
	if (am != NULL)
		std::cout << am->getType() << std::endl;

	AMateria *am1 = ims->createMateria("cure");

	if (am1)
		std::cout << am1->getType() << std::endl;
	return 0;
}*/
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

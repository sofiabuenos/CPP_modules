#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << BOLD_YELLOW << "\n<<<< TESTING ANIMAL >>>>\n" << RESET << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "This animal is a " << j->getType() << std::endl;
	j->makeSound();
	std::cout << "This animal is a " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "This animal is " << meta->getType() << std::endl;
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << BOLD_YELLOW << "\n<<<< TESTING WRONG ANIMAL >>>>\n" << RESET << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	std::cout << "This Wrong animal is a " << wi->getType() << std::endl;
	wi->makeSound(); //will output the cat sound!
	std::cout << "This Wrong animal is " << wmeta->getType() << std::endl;
	wmeta->makeSound();

	delete wmeta;
	delete wi;
	return (0);
}
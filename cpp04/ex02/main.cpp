#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

int main()
{
	// std::cout << BOLD_YELLOW << "\n<<<< KO == OK  >>>>\n" << RESET << std::endl;
	// AAnimal a();
	std::cout << BOLD_YELLOW << "\n<<<< ARRAY TEST >>>>\n" << RESET << std::endl;

	const int arrSize = 6;
	const AAnimal* AAnimalArr[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		if (i < arrSize/2)
			AAnimalArr[i] = new Dog();
		else
			AAnimalArr[i] = new Cat();
	}

	std::cout << BOLD_YELLOW << "\n<<<< MAKE SOUND TEST >>>>\n" << RESET << std::endl;

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "AAnimal " << i << " is a " << AAnimalArr[i]->getType() << std::endl;
		AAnimalArr[i]->makeSound();
	}

	std::cout << BOLD_YELLOW << "\n<<<< DESTROYING ARRAY >>>>\n" << RESET << std::endl;
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "AAnimal " << i << " destroyed" << std::endl;
		delete (AAnimalArr[i]);
	}
	return (0);
}
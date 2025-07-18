#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

int main()
{
	std::cout << BOLD_YELLOW << "\n<<<< GET AND SET IDEAS >>>>\n" << RESET << std::endl;
	Dog* doggie = new Dog();
	Cat* kitten = new Cat();
	const int numDogIdeas = 3;
	const int numCatIdeas = 3;
	std::string defaultDogIdeas[numDogIdeas] = {"Chase the ball", "Bark at mailman", "Dig a hole"};
	std::string otherDogIdeas[numDogIdeas] = {"Chase my tail", "Chew on my mom's favorite shoe", "Beg for food"};
	std::string defaultCatIdeas[numCatIdeas] = {"Climb the curtain", "Nap in the sun", "Knock things off the table"};

	// Setting ideas
	for (int i = 0; i < numDogIdeas; i++)
		doggie->setIdea(i, defaultDogIdeas[i]);

	for (int i = 0; i < numCatIdeas; i++)
		kitten->setIdea(i, defaultCatIdeas[i]);

	// Printing Doggie's ideas
	std::cout << "\ndoggie's ideas:" << std::endl;
	for (int i = 0; i < numDogIdeas; i++)
		std::cout << "  " << i << ": " << doggie->getIdea(i) << std::endl;

	// Printing kitten's ideas
	std::cout << "\nkitten's ideas:" << std::endl;
	for (int i = 0; i < numCatIdeas; i++)
		std::cout << "  " << i << ": " << kitten->getIdea(i) << std::endl;

	std::cout << BOLD_YELLOW << "\n<<<< TESTING DEEP COPIES >>>>\n" << RESET << std::endl;

	std::cout << "Instantiating a copy of doggie:\n" << std::endl;
	Dog* doggieCopy = new Dog(*doggie);

	std::cout << "\nDoggie's Brain memory address:" << doggie->getBrainPtr() << std::endl;
	std::cout << "DoggieCoppy's Brain memory address: " <<doggieCopy->getBrainPtr() << std::endl << std::endl;

	// Printing DoggieCoppy's ideas
	std::cout << "DoggieCopy's ideas:" << std::endl;
	for (int i = 0; i < numDogIdeas; i++)
		std::cout << "  " << i << ": " << doggieCopy->getIdea(i) << std::endl;
	// Giving him his own personality
	for (int i = 0; i < numDogIdeas; i++)
		doggieCopy->setIdea(i, otherDogIdeas[i]);
	// Printing DoggieCoppy's NEW ideas
	std::cout << "DoggieCopy's NEW ideas:" << std::endl;
	for (int i = 0; i < numDogIdeas; i++)
		std::cout << "  " << i << ": " << doggieCopy->getIdea(i) << std::endl;

	delete (doggie);
	delete (doggieCopy);
	delete (kitten);

	std::cout << BOLD_YELLOW << "\n<<<< ARRAY OF ANIMAL OBJECTS >>>>\n" << RESET << std::endl;

	const int arrSize = 6;
	const Animal* AnimalArr[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		if (i < arrSize/2)
			AnimalArr[i] = new Dog();
		else
			AnimalArr[i] = new Cat();
	}

	std::cout << BOLD_YELLOW << "\n<<<< MAKE SOUND TEST >>>>\n" << RESET << std::endl;

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "Animal " << i << " is a " << AnimalArr[i]->getType() << std::endl;
		AnimalArr[i]->makeSound();
	}

	std::cout << BOLD_YELLOW << "\n<<<< DESTROYING ARRAY >>>>\n" << RESET << std::endl;
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "Animal " << i << " destroyed" << std::endl;
		delete (AnimalArr[i]);
	}
	return (0);
}
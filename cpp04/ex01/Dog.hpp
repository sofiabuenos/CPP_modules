#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	private:
		Brain* dogBrain;
	public:
		Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& assign);
		~Dog();

		void	makeSound() const;

		std::string getIdea(int i) const;
		void setIdea(int i, const std::string& idea);
		const Brain* getBrainPtr(void) const;
};

#endif
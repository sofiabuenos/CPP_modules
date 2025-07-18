#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	private:
		Brain* catBrain;
	public:
		Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& assign);
		~Cat();

		void makeSound() const;

		std::string getIdea(int i) const;
		void setIdea(int i, const std::string& idea);
		const Brain* getBrainPtr(void) const;
};

#endif
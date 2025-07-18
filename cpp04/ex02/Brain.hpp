#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& cpy);
		~Brain();
		Brain& operator=(const Brain& assign);

		std::string getIdea(int i) const;
		void setIdea(int i, const std::string& idea);
};

#endif
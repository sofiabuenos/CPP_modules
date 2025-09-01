#include "Bureaucrat.hpp"

int main (void)
{
	//test assignment operator and fix message (throw exception instead) for when they have different names
	Bureaucrat* best = NULL;
	Bureaucrat* ok = NULL;
	Bureaucrat* terrible = NULL;
	try
	{
		best = new Bureaucrat("Honest", 1);
		ok = new Bureaucrat("Good", 30);
		terrible = new Bureaucrat("Corrupt", 150);
	
		std::cout << "--Before increment-- " << *ok;
		ok->increment();
		std::cout << "--After increment-- " << *ok;
	
		// std::cout << "--Before increment-- " << *best;
		// best->increment();
		// std::cout << "--After increment-- " << *best;
	
		std::cout << "--Before decrement-- " << *terrible;
		terrible->decrement();
		std::cout << "--After decrement-- " << *terrible;
	
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	delete best;
	delete ok;
	delete terrible;
	return (0);
}
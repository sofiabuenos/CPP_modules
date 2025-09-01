# -- New concepts:
* ✨ EXCEPTIONS ✨  
* Exceptions are special objects used to signal errors or unexpected situations during program execution and allow the program to react to problems (like invalid input or out-of-range values) without crashing.
* -> That's how it works:
* - 1. **create an exception class** that inherits from std::exception and then override method what(), so that you can print whichever message you'd like.
	```cpp
		class MyException : public std::exception 
		{
			public:
				virtual const char* what() const throw() // we have to write the const throw() part because the original std::exception::what() method is declared this way
				{
					return "My custom error message!";
				}
		};
	```
* - 2. **Throw an exception** – Use an `if` statement to identify error conditions in your program, similar to how you previously handled errors by exiting with a failure code. In exercise 00, the risky functions are `Bureaucrat::increment()` and `Bureaucrat::decrement()`, and these are the places where exceptions should be thrown.
* Previous logic:  
	```cpp
	if (errorCondition)
		exit(failure);
	```
* New logic:  
	```cpp
	if (errorCondition)
		throw MyException();
	```
	* 🧠 **Throwing an exception** signals that an error or unexpected situation has occurred in your program. In ex00, this means having out-of-range grades for our bureaucrats.
	* When you use the `throw` keyword, normal execution stops and the program searches for a matching `catch` block (next step) to handle the exception.
	* This allows you to separate error handling from regular code and react to problems in a controlled way.

* - 3. **Use a `try-catch` block** to capture and treat an exception:
	```cpp
	try
	{
		 // code that may throw an exception
		riskyFunction();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
* When an exception is thrown, the normal flow of the program is interrupted and control is transferred to the nearest catch block that can handle the error. 

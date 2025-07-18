
# -- New concepts:
* ✨ INHERITANCE ✨
* Inheritance in C++ allows a class (derived class) to acquire properties and behaviors (methods and attributes) from another class (base class). This promotes code reuse and establishes a relationship between classes.
* We implement inheritance using the `:` symbol followed by an access specifier (`public`, `protected`, or `private`) and the name of the base class. For example:
	```cpp
	/** the attributes in the base class are now `protected` instead of private so the derived classes can have access to them **/
	class Base {
	private:
		std::string sayHi = "Hello from Base!\n";
	public:
		void greet() { std::cout << sayHi; }
	};

	class Derived : public Base {
		// Derived inherits sayHi and greet() from Base
	};
	```
* The derived class can now use the public and protected members of the base class.

* ✨ OVERRIDING ✨ 
* Function overriding in C++ is the redefinition of a base class method with the same name and signature in the derived class. This means the function's behavior is changed according to the needs of the derived class—for example, see the `Attack` function, which prints different messages in the derived classes.

* There are two types of function overriding in C++: 
* *Compile-time overriding* (early binding) - which is the type we used in these exercises
* *Execution-time overriding* (late binding / polymorphism) - which will be explored in cpp04.


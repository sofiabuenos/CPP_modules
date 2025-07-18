# -- New concepts:
* ✨ OVERRIDING ✨ 
* Function overriding in C++ is the redefinition of a base class method with the same name and signature in the derived class. This means the function's behavior is changed according to the needs of the derived class—for example, see the `makeSound` function, which prints different messages in the derived classes.

* There are two types of function overriding in C++: 
* *Compile-time overriding* (early binding) - which is the type we used in cpp03
* *Execution-time overriding* (late binding / dynamic polymorphism) - which is explored in this set of exercises.
↪️ in this case, we declare the overriden functions as virtual.

* Let's compare both cases:
* -- in cpp03 (early binding), overridden methods are called *directly on objects of their own type*, so the compiler determines at compile time which method to invoke.

```cpp
	FragTrap frag("Bob");
	frag.attack("enemy"); // Calls FragTrap::attack directly

	ClapTrap clap("Joe");
	clap.attack("enemy"); // Calls ClapTrap::attack directly
	```

* -- in cpp04 (late binding) the variable type is a pointer to the base class (`Animal`) but the real object is a derived class (`Dog`). If the method makeSound is not virtual, the compiler will always call the base class version -- which is not what we want.

	```cpp
	const Animal* j = new Dog(); // this weird notation is called UPCASTING
	j->makeSound(); // which function will be called? A: The Dog::makeSound because it was defined as virtual
	```

* ✨ UPCASTING ✨ 
* -- A pointer for a base class pointing to a a derived object. It's useful because it:
* Allows storing objects of different derived classes in the same array, list, or vector of base class pointers.
* Enables writing generic functions that accept any derived class, operating on base class pointers or references.
* Enables dynamic polymorphism: when calling virtual methods through a base class pointer, the correct derived class method is executed.

* ✨ SHALLOW vs DEEP COPIES ✨ ex01
* In a shallow copy, you just duplicate the pointer, so both objects point to the same memory. No new object or memory is created for the data itself.
* In a deep copy, you create a completely new object (and new memory) with the same content as the original, so changes to one do not affect the other.

* ❗ Important difference between ex00 and ex01 regarding attributes and copy constructors:
	* In **ex00**, derived classes only had a simple attribute (`std::string type`), so the copy constructor could just copy this value directly. (*this = cpy)
	
	* In **ex01**, derived classes have dynamic members (e.g., pointers - pinter to Brain), so a **deep copy** is required in the copy constructor to properly duplicate all dynamic data, not just copy pointers.

* ✨ ABSTRACT CLASSES ✨ ex02
* Abstract classes are base classes that cannot be instantiated, this means they only exist to be derived from.
* They must have at least one pure virtual class which looks like this:
	```cpp
		virtual void makeSound() const = 0;
	```
* and boom: magic! now the whole Animal class can't be instatiated.
# -- Reviewing concepts:

* ✨ Overloading ✨  
  * Overloading happens when you have multiple functions with the **same name** but **different parameter lists** (types or number of parameters) in the **same class**.  
  * Example: several constructors with different arguments, or methods like `print(int)` and `print(std::string)`.  
  * Overloading is a form of **static polymorphism**, because the compiler decides which function to call **at compile time**.

* ✨ Overriding ✨  
  * Overriding occurs when a **derived class** provides a new implementation for a function that already exists in its **base class**, with the **same signature** (name and parameters).  
  * Usually, the base class function is marked as `virtual` to enable dynamic binding.  
  * Overriding enables **dynamic polymorphism**: when you call a virtual function through a base class pointer or reference, the derived class's version is executed **at runtime**.

ex1:
test get and set ideas and error messages
test if they are deep copies
# -- New concepts:
* ✨ STACK VS HEAP ALLOCATION ✨ 

* - Stack allocation: Objects are created within a function's scope and automatically destroyed when the scope ends.
* - Heap allocation: Objects are created dynamically at runtime using `new` and must be manually deleted with `delete`. similar to `malloc` and `free`

```cpp
	// Allocate memory on the heap
	Type* ptr = new Type;        // for a single object
	Type* arr = new Type[size];  // for an array of objects
	
	// Free memory from the heap
	delete ptr;        // for a single object
	delete[] arr;      // for an array
```
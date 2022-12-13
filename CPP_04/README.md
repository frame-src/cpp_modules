A virtual class in C++ is a class that contains at least one virtual function.
A virtual function is a function in a base class that is declared using the virtual keyword, and is meant to be overridden in derived classes.
The concept of virtual functions is used to support polymorphism in C++, which allows related objects to be treated as a single type.

To use a virtual class in C++, you first need to declare a class with at least one virtual function using the virtual keyword. Here's an example:

```c++
class Animal {
	public:
		virtual void makeSound() = 0;

};
```

This is the Animal class, which contains a single virtual function called makeSound. 
		"(The pure specifier (= 0) syntax is used to declare a virtual function);"-->ex02;
Note that this function is declared as pure virtual by including the = 0 after the function declaration.
This means that the Animal class is an abstract class, and cannot be instantiated on its own.

To use this Animal class, you need to create a derived class that overrides the makeSound function. For example:

```c++
class Cat : public Animal {
	public:
		virtual void makeSound() {
			cout << " *** MEOW ***" << endl;
		}

};
```

This derived class inherits from the Animal class and overrides the makeSound function.
Now you can create objects of the Cat class and use them polymorphically, treating them as if they were Animal objects even though they are actually Cat objects.

The main advantage of using virtual classes in C++ is that they support polymorphism, which allows related objects to be treated as a single type. This can make it easier to write code that is more flexible and reusable.
For example, you could write a function that takes a "Base" object as an argument and calls the "doSomething" function on that object, even if the actual object passed to the function is a "Derived" object.
The function would automatically call the overridden "doSomething" function in the "Derived" class, without the need for any additional type checking or casting.

So virtual classes in C++ are a powerful tool for supporting polymorphism and writing more flexible and reusable code. They are particularly useful when working with large and complex object-oriented code bases.

STRING ALLOCATE:
std::string is just a normal class, defined as:
```cpp
namespace std
{
    typedef std::basic_string<char> string;
};
```
so it's a synonym for the instantiation of the basic_string template class for characters of type char.

It means the usual rules apply:
	1#	When the std::string objects is stored on the stack, as globals, as class members you don't need to do anything special,
	when they go out of scope their destructor is called, and it takes care of freeing the memory used for the string automatically.
```cpp
	void ideas()
	{
		string ideas[100];
		// no need to do anything, mystring goes out of scope and everything is cleaned up automatically
	}
```
	2# When the std::string object is stored on the heap using the "new" operator, then, as any object allocated with new, you need to call "delete" and free it;
```cpp
	void ideas()
	{
		string *ideas = new string[100];
		delete ideas;
		// delete is doing the same of free() in c;
	}
```

https://www.simplilearn.com/tutorials/cpp-tutorial/abstract-class-in-cpp#:~:text=An%20abstract%20class%20in%20C%2B%2B,class%20in%20its%20own%20right.
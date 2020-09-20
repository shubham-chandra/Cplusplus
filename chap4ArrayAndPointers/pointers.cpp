#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

/*
just as we can traverse a vector using iterator,
we can traverse an array using pointer.

A pointer is a compound type, it points to an object
of some other type. They are iterators for arrays.

we can use deference and increment just as iterators,
on pointers.  

*/

/*
A pointer points at an object, it offers indirect access
to the object which it points.

Unlike iterators pointers can be used to point at a single object.

A pointer holds the address of another object.

*/

	string s("hello world");
	string *sp = &s;

	cout << *sp << endl; 

/*
The * in sp indicates that it is a pointer.
The & in &s is the address of operator. It returns a value
that when derefrenced yield the original object.

The address of operator may be applied only to an lvalue.

*/

/*
Defining and initializing pointers

Every pointer has an associated type. The type will determine
the type of objects to which the pointer may point.


*/

int *i1,i2;
// i1 is pointer i2 is not.. use * for each pointer declaration.

/*
A VALID(make sense) pointer has three states:
	can hold address of an object.
	one past end of object.(array termination)
	a zero valued pointer, which points to no object.

*/

i1 = 0; // Null pointer(zero valued)
i1 = &i2;  // Now i1 points to i2


/*
Constaints on initialization and assignment of pointers:

there are only four type of values that can be initialized to a pointer
	1. A constant expression with value 0.
	2. Address of an object of appropriate type.
	3. Address of one past end of object.
	4. Another valid pointer of same type.

illegal to assign an int to pointer , even if the value of int is 0;

cstdlib defines a preprocessor variable NULL, whic equals 0.
*/

/*
The void * pointer

It can hold the address oa any object, but we cannot derefrence it, however
we can reassign it to other type .
*/

	return 0;
}